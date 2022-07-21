class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> ans;
            
            int i=0, j=0, k=0;
            // i,j,k are pointing to the first indices of arrays a, b and c
            
            while(i<n1 && j<n2 && k<n3)
            {
                if(a[i]==b[j] && b[j]==c[k])
                {
                    ans.push_back(a[i]);
                    i++; j++; k++;
                }
            
                 /* if array1 elements < array2 elements and so on ....so
                   we will have to bring together to get common element */
                   
                 else if(a[i]<b[j])  i++;
                 else if(b[j]<c[k])  j++;
                 else k++;
                 
                 //check for duplicate elements
                   while(a[i-1] == a[i])  i++;
                   while(b[j-1] == b[j])  j++;
                   while(c[k-1] == c[k])  k++;
            }
             
            vector<int>temp;
            temp.push_back(-1);
            
                 if(ans.size() == 0) return temp;
       
           return ans;
                   
        }

};
