def distinct(seq):
    tab = []
    for i in seq:
        if not i in tab:
            tab.append(i)
    return tab