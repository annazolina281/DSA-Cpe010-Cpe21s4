#include <iostream>
#include <string>
using namespace std;

// Node class representing each song in the playlist
class Node {
public:
    string song;
    Node* next;

    Node(const string& song) : song(song), next(nullptr) {}
};

// Playlist class for managing the circular playlist
class Playlist {
private:
    Node* head;

public:
    Playlist() : head(nullptr) {}

    // Function to create a playlist with multiple songs
    void CreatePlaylist(const string songs[], int size) {
        for (int i = 0; i < size; i++) {
            AddSong(songs[i]);
        }
    }

    // Function to add a song to the playlist
    void AddSong(const string& song) {
        Node* newNode = new Node(song);

        if (!head) {
            head = newNode;
            head->next = head;  // Point to itself in circular fashion
        } else {
            Node* temp = head;
            while (temp->next != head) temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "Added: " << song << endl;
    }

    // Function to remove a song from the playlist
    void RemoveSong(const string& song) {
        if (!head) {
            cout << "Playlist is empty. Cannot remove '" << song << "'." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // If head is the song to be removed
        if (head->song == song) {
            if (head->next == head) {  // Only one song in the playlist
                delete head;
                head = nullptr;
            } else {
                while (temp->next != head) temp = temp->next;
                temp->next = head->next;
                delete head;
                head = temp->next;
            }
            cout << "Removed: " << song << endl;
            return;
        }

        // Search for the song
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->song != song);

        if (temp == head) {
            cout << "Song '" << song << "' not found in the playlist." << endl;
        } else {
            prev->next = temp->next;
            delete temp;
            cout << "Removed: " << song << endl;
        }
    }

    // Function to play all songs once (loop through the playlist)
    void PlayAll() const {
        if (!head) {
            cout << "The playlist is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "\nCurrent Playlist:\n";
        do {
            cout << "- " << temp->song << endl;
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Function to get the next song
    void NextSong() {
        if (head) {
            head = head->next;
            cout << "Now playing: " << head->song << endl;
        } else {
            cout << "No songs in the playlist." << endl;
        }
    }

    // Function to get the previous song
    void PreviousSong() {
        if (!head) {
            cout << "No songs in the playlist." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        head = temp;
        cout << "Now playing: " << head->song << endl;
    }
};

int main() {
    Playlist playlist;

    // Creating the playlist with multiple songs
    string songs[] = {"Song1", "Song2", "Song3", "Song4"};
    playlist.CreatePlaylist(songs, 4);

    // Play all songs
    playlist.PlayAll();

    // Add more songs
    playlist.AddSong("Song5");
    playlist.AddSong("Song6");

    // Play all songs again
    playlist.PlayAll();

    // Remove a song
    playlist.RemoveSong("Song2");
    playlist.PlayAll();

    // Try removing a non-existent song
    playlist.RemoveSong("Song10");

    // Final playlist
    playlist.PlayAll();

    // Test next and previous song functionality
    playlist.NextSong();
    playlist.PreviousSong();

    return 0;
}