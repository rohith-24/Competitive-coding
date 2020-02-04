int main()
 {  int count;
    cin>>count;
	while(count--){
	    
	   int size;
	   cin>>size;
	   int a[size];
	   for(int i=0;i<size;i++)
	    cin>>a[i];
	   int max_so_far = a[0]; 
       int curr_max = a[0]; 
  
       for (int i = 1; i < size; i++) 
       { 
          curr_max = max(a[i], curr_max+a[i]); 
          max_so_far = max(max_so_far, curr_max); 
        } 
        cout<<max_so_far<<endl;
	}
	return 0;
}
