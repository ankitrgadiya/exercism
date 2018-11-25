def hey(phrase):
    if not phrase.strip():
        return "Fine. Be that way!"
    elif phrase.strip()[-1] == "?":
        if phrase.isupper():
            return "Calm down, I know what I'm doing!"
        else:
            return "Sure."
    elif phrase.isupper():
        return "Whoa, chill out!"

    return "Whatever."
