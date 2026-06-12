// Write a program to Find duplicates in array
    #include<iostream>
    #include<vector>
        #include<algorithm>
        using namespace std;

        int main()
        {
        int n,num;
        vector<int> arr;
        vector<int> ans;

        cout<<"enter size of array::";cin>>n;
        for (int i = 0; i < n; i++)
        {
        cout<<"enter arr["<<i<<"]::";cin>>num;
        
        arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        for (int i = 0; i < n; i++){
        
        if (arr[i]==arr[i+1])
        {
            ans.push_back(arr[i]);
            while ((i<n-1)&&(arr[i]==arr[i+1]))
            {
                i++;
            }
        }

        }
        cout<<"duplicates are::";
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<",";
        }


        return 0;
        }
