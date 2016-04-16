// B. Beautiful Paintings

// Jason McGough
// j.mcgough227@gmail.com

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int num_painting, rating;
  std::cin >> num_painting;

  std::vector<int> beauty;
  std::vector<int> gallery;

  for (int i = 0; i < num_painting; ++i) {
    std::cin >> rating;
    beauty.push_back(rating);
  }

  std::sort(beauty.begin(), beauty.end());

  //for (int d = 0; d < beauty.size(); ++d) std::cout << beauty[d] << " ";
  //std::cout << std::endl;

  int m = 0;
  int count = 0;

  while (beauty.size() > 0) {
    gallery.push_back(beauty[0]);
    beauty.erase(beauty.begin());

    int k = 0;

    while (k != beauty.size()) {
      if (gallery[m] < beauty[k]) {
        gallery.push_back(beauty[k]);
        beauty.erase(beauty.begin()+k);
        ++m;
        ++count;
      }
      else {
        ++k;
      }
    }

    ++m;
  } 

  //for (int d = 0; d <gallery.size(); ++d) std::cout << gallery[d] << " ";
  //std::cout << std::endl;

  std::cout << count << "\n";

  return 0;
}

