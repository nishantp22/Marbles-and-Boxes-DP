# Marbles and Boxes : Editorial
This problem can be easily solved with some knowledge of combinatorics.<br>
<b>Derangement principle : </b> It is a permutation of the elements of a set in which no element appears in its original position. Example : 
  suppose we have a permutation $(1,2,3,4,5)$, then a derangement would be $(2,4,5,1,3)$ as no element is in its original position.<br>
  Clearly, the number of ways in which we can derange a set containing $n$ distinct elements are $n!-N$, where N is the number of ways where atleast 
  one element is in the right place.<br>
  If $D_n$ is the number of ways of deranging a set of n elements, then :<br>
  $D_n=n!(1-\frac{1}{1!}+\frac{1}{2!}-\frac{1}{3!}+...+(-1)^n\frac{1}{n!}$
  
  
