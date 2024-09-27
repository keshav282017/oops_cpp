#include<iostream>
using namespace std;
struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

// ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
//     COUT << "Name: " << ytChannel.Name << endl;
//     COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
//     return COUT;
// }         //* this function for cout<<yt1<<yt2 


//* for cout<<yt1 
void operator<<(ostream& COUT ,YouTubeChannel& ytChannel ){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
}

int main(){
        YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);
    cout<<yt1 ; 


    return 0  ; 
}