
This is a fully functional modification of Bruce Schneier & Paul Kochers implementation of Blowfish Algorithm.

The primary purpose of this modification is to understand the algorithm and experiment in ways to reduce the overall code size.
And a further objective is to seek improvement in performance.

The original implementation itself is highly optimized. I am afraid I have only been able to realize minimal reduction
in the code size. I am highly doubtful that I've acheived any performance gains.

Further, I think any reduction in code size is dubious and I must admit that I am not quite satisifed.

You can find the orignal implementation here (under source code):
https://www.schneier.com/academic/blowfish/

.. Experimentation continues .. 

Usage:
See bf_test.c on how to use this implementation.
See the Makefile for directions on compliation.

If you chance upon this source and have ideas on how to improve the code size and/or achieve better performance, I am all ears.
