template <typename Cont, typename Comp>

void bubble_sort(Cont& cont, Comp& comp) {
    for (int i = 0; i < cont.size(); i++) {
        for (int j = i + 1; j < cont.size(); j++) {
            if(!comp(cont[i], cont[j])) {
                cont.swap(i, j);
            }
        }
    }
}