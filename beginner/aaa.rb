# frozen_string_literal: true

a = gets.to_i
b, c = gets.chomp.split(' ').map(&:to_i)
s = gets.chomp

print("#{a+b+c} #{s}\n")

print a if a == 2
