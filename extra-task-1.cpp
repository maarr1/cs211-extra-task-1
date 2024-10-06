double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1
}

double hours_difference(double time_1, double time_2)
{
   return (time_2 - time_1) / 3600
}

double to_float_hours(int hours, int minutes, int seconds)
{
    / return hours + minutes / 60 + seconds / 3600
}

double to_24_hour_clock(double hours)
{
    return hours % 24
}

def get_hours(seconds):
    return seconds // 3600

def get_minutes(seconds):
    return (seconds % 3600) // 60

def get_seconds(seconds):
    return (seconds % 3600) % 60

double time_to_utc(int utc_offset, double time)
{
    return to_24_hour_clock(time - utc_offset)
}

double time_from_utc(int utc_offset, double time)
{
    return to_24_hour_clock(time + utc_offset)
}
