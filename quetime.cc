long queueTime(std::vector<int> customers,int n){
if (customers.empty()) return 0;
long wynik=0;
while(!customers.empty()){
    int p=customers.size()<n?customers.size():n;
    for(int i=0;i<p;i++){
        customers[i]--;
    }
    //if(std::find(customers.begin(), customers.end(),0)!=customers.end())
        customers.erase(std::remove_if(customers.begin(), customers.end(),[](int a){return a==0;}),customers.end());
    wynik++;
}
    return wynik;
}


long queueTime(std::vector<int> customers,int n){
  std::vector<long> queues(n, 0);
  
  for (int i : customers)
    *std::min_element(queues.begin(), queues.end()) += i;
    
  return *std::max_element(queues.cbegin(), queues.cend());
}
