def binary_search(target_value, search_list):
    lower_bound = 0
    upper_bound = len(search_list)-1

    while lower_bound <= upper_bound:
        mid_index = ((lower_bound+upper_bound)//2)

        if target_value == search_list[mid_index]:
            return f"{target_value} found at position {mid_index+1}"

        if search_list[mid_index] < target_value:
            lower_bound = mid_index+1

        elif search_list[mid_index] > target_value:
            upper_bound = mid_index-1

    return f"{target_value} not found"
