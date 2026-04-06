/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    void merge(vector<int>& arr, int st, int mid, int end)
    {
        int i = st;
        int j = mid + 1;
        int k = 0;

        int size = end - st + 1;
        vector<int> temp(size);

        while (i <= mid && j <= end)
        {
            if (arr[i] < arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }

        while (i <= mid)
            temp[k++] = arr[i++];

        while (j <= end)
            temp[k++] = arr[j++];

        for (int i = 0; i < size; i++)
            arr[st + i] = temp[i];
    }

    void merge_sort(vector<int>& arr, int st, int end)
    {
        if (st < end)
        {
            int mid = st + (end - st) / 2;
            merge_sort(arr, st, mid);
            merge_sort(arr, mid + 1, end);
            merge(arr, st, mid, end);
        }
    }

    ListNode* sortList(ListNode* head)
    {
        if (!head || !head->next)
            return head;

        int n = 0;
        ListNode* temp = head;
        while (temp)
        {
            n++;
            temp = temp->next;
        }

        vector<int> arr(n);
        temp = head;
        int i = 0;

        while (temp)
        {
            arr[i++] = temp->val;
            temp = temp->next;
        }

     
        merge_sort(arr, 0, n - 1);

        temp = head;
        i = 0;

        while (temp)
        {
            temp->val = arr[i++];
            temp = temp->next;
        }

        return head;
    }
};