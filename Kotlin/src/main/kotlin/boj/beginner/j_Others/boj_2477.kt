package boj.beginner.j_Others


fun boj_2477() = with(System.`in`.bufferedReader()) {
    val k = readLine().toInt()

    // λ(1), μ(2), λ¨(3), λΆ(4)
    var dir = intArrayOf(0, 0, 0, 0, 0)
    var len = mutableListOf<Int>()

    repeat (6) {
        val (direction, length) = readLine()
            .split(" ")
            .map { it.toInt() }

        dir[direction]++
        len.add(length)
    }
}