# C-IRO

### !!! For now this only works on linux !!!
### A handy, very very little header for printing colored text in c.

--

## How to use c-iro.
Call the function ciro_printf();

The first argument is the FOREGROUND color.

The second argument is the BACKGROUND color.

The third argument is the STYLE.

The fourth arguemnt is the STRING (can be formatted).

The rest of the argument is like prinf, for formatted strings.


--

## C-IRO colors.
CIRO_NONE       You can use this if you have a transparent background and you dont want a color behind the text.

CIRO_BLACK      - For black text.

CIRO_RED        - For red text.

CIRO_GREEN      - For green text.

CIRO_YELLOW     - For yellow text.

CIRO_BLUE       - For blue text.

CIRO_PURPLE     - For purple text.

CIRO_CYAN       - For cyan text.

CIRO_WHITE      - For white text.

--

## C-IRO styles.
CIRO_NORMAL         - No style.

CIRO_BOLD           - For bold text.

CIRO_DARK           - For dimmed text.

CIRO_ITALIC         - For italic text.

CIRO_UNDERLINE      - For underlined text.
