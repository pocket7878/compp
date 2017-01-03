class State
  attr_reader :branches

  def initialize(x, y)
    @x = x
    @y = y
  end

  def move(dx, dy)
    @x += dx
    @y += dy
  end

  def branches
    bs = []
    bs << State.new(@x - 1, @y)
    bs << State.new(@x + 1, @y)
    bs << State.new(@x, @y - 1)
    bs << State.new(@x, @y + 1)
    bs
  end

  def dist
    @x.abs + @y.abs
  end
end

rootState = State.new(0, 0)
currentLeaves = [rootState]

s = gets.chomp
t = gets.to_i

s.each_char do |c|
  case c
  when 'L'
    currentLeaves.each do |l|
      l.move(-1, 0)
    end
  when 'R'
    currentLeaves.each do |l|
      l.move(1, 0)
    end
  when 'U'
    currentLeaves.each do |l|
      l.move(0, 1)
    end
  when 'D'
    currentLeaves.each do |l|
      l.move(0, -1)
    end
  when '?'
    newLeaves = []
    currentLeaves.each do |l|
      newLeaves.concat(l.branches)
    end
    currentLeaves = newLeaves
  end
end

if t == 1
  puts currentLeaves.collect(&:dist).max
else
  puts currentLeaves.collect(&:dist).min
end
