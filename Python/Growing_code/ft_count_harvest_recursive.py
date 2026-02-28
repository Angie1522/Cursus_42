def helper_count_day(day, total_days):
	if day > total_days
    	return
    print("Day", day)
    helper_count_day(day + 1, total_days)

def ft_count_harvest_recursive():
    total_days = int(input("Days until harvest: "))
    helper_count_day(1, total_days)
    print("Harvest time!")