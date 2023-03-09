static int hoge(int i) {
    if ( i == 0 ) {
        return 0;
    } else {
        return i + 5;
    }
}

int main(void) {
    return hoge(0);
}
