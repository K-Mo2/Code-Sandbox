class Movie
    attr_accessor :title, :showtime, :cinema
    @@all = []
    def initialize(title, showtime)
      @title = title
      @showtime = showtime
      @@all << self  
    end

    def get_all
        p self
    end
  end

  movie1 = Movie.new("1", "1:00 PM")
  movie2 = Movie.new("2", "2:00 PM")
  movie3 = Movie.new("3", "3:00 PM")

  movie3.get_all()