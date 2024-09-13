#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag=1;
                // it means that the array is NOT in non decreasing
                // order Eg: 2, 1, 5, 7, 3
            }
        }
        if(k==1 && flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}

// Other approach
void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	if (k >= 2) {cout << "YES\n";}
	else {cout << (is_sorted(a, a + n) ? "YES\n" : "NO\n");}
}