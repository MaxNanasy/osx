// RUN: clang-cc -triple i686-unknown-unknown -emit-llvm -o %t %s &&
// RUN: grep 'target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32"' %t &&
// RUN: clang-cc -triple i686-apple-darwin9 -emit-llvm -o %t %s &&
// RUN: grep 'target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:128:128"' %t &&
// RUN: clang-cc -triple x86_64-unknown-unknown -emit-llvm -o %t %s &&
// RUN: grep 'target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128"' %t &&
// RUN: true
