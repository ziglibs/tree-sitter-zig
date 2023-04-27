test {
    switch (a) {
        .one => @panic("one"),
        else => @panic("else"),
    }
}
