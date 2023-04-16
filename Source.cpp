unsigned possub(const char* sub, const char* src, unsigned from, unsigned count)
{
    // нумерация с 1
    unsigned len_sub = strlen(sub), len_src = strlen(src);
    if (!len_sub || !len_src) return 0;
    if (from + count > len_src) count = len_src - from;
    if (from > len_src || count < len_sub) return 0;
    if (len_src - from < len_sub) return 0;

    char* end_pos = (char*)src + len_src - len_sub + 1; // конечная позиция, с которой поиск бесполезен
    unsigned found = from; // номер текущей позиции

    for (char* pos = (char*)src + from - 1; pos < end_pos; pos++, found++)
        if (!memcmp(pos, sub, len_sub)) return found;

    return 0; // не найдено
}