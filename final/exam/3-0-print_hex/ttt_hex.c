


if (n >= 16) {
    hex(n / 16);
}
n /= 16;
n += n < 10 ? '0' : 'a' - 10;

}
