long arrayManipulation(int n, vector<vector<int>> queries) {
    #define a (*row)[0]
    #define b (*row)[1]
    #define k (*row)[2]

    #define first (*sec)[0]
    #define last (*sec)[1]

    typedef vector<int> SECTION;
    vector<vector<int>> arr; 
    vector<vector<int>>::iterator firstSec;
    vector<vector<int>>::iterator lastSec;

    arr.push_back({1,n,0});

    for(auto row = queries.begin(); row != queries.end(); row++) {
        for(vector<vector<int>>::iterator sec = arr.begin(); a > last; sec++) {
            firstSec = sec;
        }
        for(auto sec = arr.end(); b < last ; sec--){
            lastSec = sec;
        }

        int fa = (*firstSec)[0];
        int fb = (*firstSec)[1];
        int fk = (*firstSec)[2];

        if(firstSec == lastSec) {
            if(a == fa and b == fb) { //both are equal
                    (*firstSec)[2] = fk + k;
            } else if(a != fa and b == fb) { // only b border {
                firstSec = arr.insert(firstSec, {a, b, fk + k});//
                firstSec = arr.insert(firstSec, {fa, a-1, fk});//
                firstSec++; //erase old section now contigious with 
                arr.erase(firstSec);
            } else if(a == fa and b != fb)//only a border {
                firstSec = arr.insert(firstSec, {b+1, fb, fk});
                firstSec = arr.insert(firstSec, {a, b, fk + k});
                firstSec++; //erase old section now contigious with 
                arr.erase(firstSec);
            } else { //neither border
                firstSec = arr.insert(firstSec, {b+1, b, fk}); //not changed
                firstSec = arr.insert(firstSec, {a, b, fk + k});//Changed section
                firstSec = arr.insert(firstSec, {a, a+1, fk}); //not changed
                firstSec++; //erase old section now contigious with 
                arr.erase(firstSec);
            }
        }
    return -1;
    #undef a 
    #undef b 
    #undef k 
}
