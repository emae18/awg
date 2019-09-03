//SortMapByValue
typedef function<bool(pair<string,int> ,pair<string,int>  )> Comparator;
Comparator comp=[](pair<string,int> e1,pair<string,int> e2){return e1.second<e2.second;};
set<pair<string,int> >,Comparator> s(all(m),comp);
