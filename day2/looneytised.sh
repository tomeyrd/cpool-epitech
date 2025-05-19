#!/bin/bash
grep -i -E 'arnaud1|steven1|pierre-jean|theo1' | sed -e 's/arnaud1/Porky Pig/g' | sed -e 's/steven1/Daffy Duck/g' | sed -e 's/pierre-jean/Marvin the Martian/g' | sed -e 's/theo1/Wile E. Coyote/g'
