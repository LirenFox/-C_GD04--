#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int ncase,M,m,k;
    vector<int> vec;
    cin >> ncase;
    while(ncase--){
        int sum = 0;
        cin >> M >> m >> k;
        for(int i=0; i<k; i++){
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());//將獎品依價格排序
        for(int i=0; i<m; i++){//先選價格低的
            sum+=vec[i];
        }
        if(sum <= M){//檢查是否超出預算
            cout << sum << endl;
        }
        else
            cout << "Impossible"<< endl;

        vec.clear();
    }

    return 0;
}
