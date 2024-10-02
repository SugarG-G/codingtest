def solution(genres, plays):
    answer = []
    # 장르별 재생 횟수를 담은 map
    genre_sum_map = {}
    # 장르별 가장 많이 들은 노래2개를 담은 map
    genre_map = {}
    for i, genre in enumerate(genres):
        if genre in genre_map:
            genre_sum_map[genre] = genre_sum_map[genre] + plays[i]
            genre_list = genre_map[genre]
            genre_list.append((i, plays[i]))
            # 가장 많이들은 노래 2개만 알면 되기때문에, 2개빼고 버림
            genre_map[genre] = sorted(genre_list, key=lambda x : x[1], reverse=True)[:2]
        else:
            genre_sum_map[genre] = plays[i]
            genre_map[genre] = [(i, plays[i])]

    # 가장 많이들은 순서대로 정렬
    sorted_genre_sum_list = sorted(genre_sum_map.items(), key=lambda x : x[1], reverse=True)

    for value in sorted_genre_sum_list:
        play_list = genre_map[value[0]]
        for i in play_list:
            answer.append(i[0])
    return answer

genres = ["classic", "pop", "classic", "classic", "pop"]
plays = [500, 600, 150, 800, 2500]

print(solution(genres, plays))