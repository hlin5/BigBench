#!/usr/bin/perl -w

# bigbench template file.

$| = 1;
use lib '##path##/Math-BigInt-1.48/lib';
use lib '##path##/Math-BigInt-Pari-1.05/lib';
use Math::BigInt lib => 'Pari';
use Math::BigFloat;
use Benchmark;
my $c = 'Math::BigInt';
my $cf = 'Math::BigFloat';

# output header and test for correct version

my $need = 'Math::BigInt v1.48 lib => Math::BigInt::Pari v1.05';
my $v = "Math::BigInt v$Math::BigInt::VERSION ";
if (Math::BigInt->can('_core_lib'))
  {
  $v .= "lib => ". Math::BigInt->_core_lib();
  $v .= ' v' . eval '$'.Math::BigInt->_core_lib().'::VERSION';
  }
print "$v\n";

die "Cannot load '$need', got '$v'\n" unless $v eq $need;

# actual benchmarking code will be appended

