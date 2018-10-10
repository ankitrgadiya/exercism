(define-module (squares)
  #:export (sum-of-squares
            square-of-sum
            difference)
  #:autoload (srfi srfi-1) (reduce iota))

(define (sum a b term next)
        (if (> a b)
            0
            (+ (term a)
               (sum (next a) b term next))))

(define (square x) (* x x))

(define (sum-of-squares limit)
        (sum 1 limit square 1+))

(define (square-of-sum limit)
        (square (sum 1
                     limit
                     (lambda (x) x)
                     1+)))

(define (difference limit)
        (- (square-of-sum limit)
           (sum-of-squares limit)))
