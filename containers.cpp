/*
Problem Breakdown:
Declare a container for Mat’s friends:

We need to declare a container (like a set, vector, or list) to store Mat’s friends in sorted order.
Since the question states that we don't need to enter data (someone else will do that), we just need to declare the container.
Declare a container for Pat’s friends:

Similarly, we declare another container to store Pat's friends in sorted order.
Create a third container that combines both lists without adding duplicates:

We need to combine Mat’s and Pat’s lists, making sure to remove duplicates.
We’ll use a container or algorithm to merge both sorted lists and print the result.
*/

/*
Solution Plan:
Declare two sorted containers (e.g., set or vector for Mat and Pat).

The set in C++ automatically maintains sorted order and prevents duplicates.
Alternatively, we can use vector with sorting functions but ensure that there are no duplicates manually.
Use set_union to combine Mat’s and Pat’s containers without duplicates:

std::set_union from the C++ standard library can be used to merge two sorted containers into a new one without duplicates.
Print the result from the combined container.
*/

/*
int main() {
    
    //declare a container for both friends
    set<string> matFriends;
    set<string> patFriends;

    //declare a third container to store the combine(set_union) or common friends (set_intersection) friends
    set<string> combinedFriends;

    //use set union to combine both friends or set intersection
    set_union(matFrieds.begin(), matFriends.end(), patFriends.begin(), patFriends.end(), inserter(combinedFriends, combinedFriends.begin()))

    for(const auto& friendName : combinedFriends) {
        cout<<friendName<<endl;
    }
return 0;

}
*/

/*
Use Case:
Imagine Mat and Pat want to throw a party, but they only want to invite the friends they both have in common. So, they ask you to write a program that does the following:

Declare a container to store Mat’s friends.
Declare a container to store Pat’s friends.
Create a third container that contains the names of the friends common to both Mat and Pat (the intersection of the two lists).
Print the common friends.
Here, set_intersection is the ideal tool to find and store the common friends.

int main(){

    
    set<string> matFriends;
    set<string> patFriends;

    //declare a container for common friends
    set<string> commonFriends;

    set_intersection(matFriends.begin(), matFriends.end(), patFriends.begin(), patFriends.end(), inserter(commonFriends, commonFriend.begin()));

    for (const auto& friendName: commonFriends){
    cout<<friendName<<endl;
    }
    return 0;
}
*/