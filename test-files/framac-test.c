static const int intervalSize = 100;
int get_text_width(char* text, int fontSize)
{
    int result = 0;
    while(*text)
    {
        result += fontSize + intervalSize;
        ++text;
    }
    return result - intervalSize;
}

int main(int argc, char** argv)
{
    get_text_width("test", 16000);
    return 0;
}
