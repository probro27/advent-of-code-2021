#lang racket

(define (traverse-list lst count)
  (cond
    [(empty? (cdr lst)) count]
    [(> (cadr lst) (car lst)) (traverse-list (cdr lst) (add1 count))]
    [true (traverse-list (cdr lst) count)]))

(define (three-sum lst count)
  (cond
    [(empty? (cdddr lst)) count]
    [(< (+ (car lst) (cadr lst) (caddr lst)) (+ (cadr lst) (caddr lst) (cadddr lst))) (three-sum (cdr lst) (add1 count))]
    [true (three-sum (cdr lst) count)]))
