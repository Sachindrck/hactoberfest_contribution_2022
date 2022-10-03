(ns clojure.bubble-sort
  "Sorting using the bubble sort algorithm.")


(defn bubblify
  "Bubbles the given values."
  [vals]
  (-> (fn [bubble-vals next-val]
        (cond
         (empty? bubble-vals)            [next-val]
         (> next-val (peek bubble-vals)) (conj bubble-vals next-val)
         :else                           (conj (pop bubble-vals) next-val (peek bubble-vals))))
      (reduce [] vals)))

(defn rearrange
  "Rearranges the given values using the bubble sort method."
  [sorted-vals vals]
  (if (empty? vals)
    sorted-vals
    (let [bubbled-vals (bubblify vals)
          last-val (peek bubbled-vals)
          not-last-vals (pop bubbled-vals)]
      (rearrange (cons last-val sorted-vals) not-last-vals))))

(defn sort
  "Sorts the given values using the bubble sort algorithm.
  Example:
  |----------------+----------------|
  | sorted         | unsorted       |
  |----------------+----------------|
  | [ ]            | [ 2- 4- 1  3 ] |
  | [ ]            | [ 2  4- 1- 3 ] |
  | [ ]            | [ 2  1  4- 3-] |
  | [ ]            | [ 2  1  3  4*] |
  |----------------+----------------|
  | [ 4 ]          | [ 2- 1- 3 ]    |
  | [ 4 ]          | [ 1  2- 3-]    |
  | [ 4 ]          | [ 1  2  3*]    |
  |----------------+----------------|
  | [ 3  4 ]       | [ 1- 2-]       |
  | [ 3  4 ]       | [ 1  2*]       |
  |----------------+----------------|
  | [2  3  4 ]     | [ 1*]          |
  |----------------+----------------|
  | [ 1  2  3  4 ] | [ ]            |
  |----------------+----------------|"
  [vals]
  (rearrange [] vals))