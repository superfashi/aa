
void Sha256_Compress(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  
  uVar7 = *param_1;
  uVar12 = param_1[1];
  uVar2 = uVar7 + 0x75a999bb;
  uVar1 = uVar7 + 0xeea44197;
  uVar13 = param_1[2];
  iVar14 = uVar12 + 0x93009747 +
           ((uVar2 >> 6 | uVar2 * 0x4000000) ^ (uVar2 >> 0xb | uVar2 * 0x200000) ^
           (uVar2 * 0x80 | uVar2 >> 0x19)) + (~uVar2 & 0xb937b0b ^ uVar2 & 0x615b450c);
  uVar23 = iVar14 + 0xb7c84c69;
  uVar15 = iVar14 + ((uVar1 >> 2 | uVar1 * 0x40000000) ^ (uVar1 >> 0xd | uVar1 * 0x80000) ^
                    (uVar1 * 0x400 | uVar1 >> 0x16)) + 0x59f111f1 +
                    (uVar1 & 0xe359765c ^ 0x14848000);
  iVar5 = uVar13 + 0xb937b0b +
          ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
          (uVar23 * 0x80 | uVar23 >> 0x19)) + (~uVar23 & 0x615b450c ^ uVar2 & uVar23);
  uVar18 = iVar5 + 0xea1406f4;
  uVar3 = param_1[3];
  uVar6 = iVar5 + ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
                  (uVar15 * 0x400 | uVar15 >> 0x16)) + 0x923f82a4 +
                  ((uVar1 ^ 0xb48df20c) & uVar15 ^ uVar1 & 0xb48df20c);
  uVar4 = param_1[5];
  iVar8 = uVar3 + 0x615b450c +
          ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
          (uVar18 * 0x80 | uVar18 >> 0x19)) + (~uVar18 & uVar2 ^ uVar23 & uVar18);
  uVar2 = iVar8 + 0x5faa50e1;
  uVar10 = param_1[4];
  uVar9 = iVar8 + ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
                  (uVar6 * 0x400 | uVar6 >> 0x16)) + 0xab1c5ed5 +
                  ((uVar1 ^ uVar15) & uVar6 ^ uVar1 & uVar15);
  iVar25 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
           (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
           uVar7 + 0x4db14453 + uVar10 + (~uVar2 & uVar23 ^ uVar18 & uVar2);
  uVar1 = uVar1 + iVar25;
  uVar26 = iVar25 + ((uVar15 ^ uVar6) & uVar9 ^ uVar15 & uVar6) +
                    ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                    (uVar9 * 0x400 | uVar9 >> 0x16));
  iVar14 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
           (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
           iVar14 + -0x35b45896 + uVar4 + (~uVar1 & uVar18 ^ uVar2 & uVar1);
  uVar31 = param_1[6];
  uVar15 = uVar15 + iVar14;
  uVar23 = iVar14 + ((uVar6 ^ uVar9) & uVar26 ^ uVar6 & uVar9) +
                    ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
                    (uVar26 * 0x400 | uVar26 >> 0x16));
  iVar5 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
          (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
          iVar5 + 0xe458cb2 + uVar31 + (~uVar15 & uVar2 ^ uVar1 & uVar15);
  uVar6 = uVar6 + iVar5;
  uVar32 = uVar4 + 0xdf91e031;
  uVar11 = param_1[7];
  uVar18 = iVar5 + ((uVar9 ^ uVar26) & uVar23 ^ uVar9 & uVar26) +
                   ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                   (uVar23 * 0x400 | uVar23 >> 0x16));
  iVar5 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
          (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
          iVar8 + -0x4b49315c + uVar11 + (~uVar6 & uVar1 ^ uVar15 & uVar6);
  uVar9 = uVar9 + iVar5;
  uVar16 = iVar5 + ((uVar26 ^ uVar23) & uVar18 ^ uVar26 & uVar23) +
                   ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
                   (uVar18 * 0x400 | uVar18 >> 0x16));
  iVar5 = uVar1 + 0xdaf1bceb +
          ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000) ^
          (uVar9 * 0x80 | uVar9 >> 0x19)) + (~uVar9 & uVar15 ^ uVar6 & uVar9);
  uVar26 = uVar26 + iVar5;
  uVar2 = iVar5 + ((uVar23 ^ uVar18) & uVar16 ^ uVar23 & uVar18) +
                  ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                  (uVar16 * 0x400 | uVar16 >> 0x16));
  iVar5 = uVar15 + 0xca2d2f7e +
          ((uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000) ^
          (uVar26 * 0x80 | uVar26 >> 0x19)) + (~uVar26 & uVar6 ^ uVar9 & uVar26);
  uVar23 = uVar23 + iVar5;
  uVar1 = iVar5 + ((uVar18 ^ uVar16) & uVar2 ^ uVar18 & uVar16) +
                  ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
                  (uVar2 * 0x400 | uVar2 >> 0x16));
  iVar5 = uVar6 + 0x9bdc06a7 +
          ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
          (uVar23 * 0x80 | uVar23 >> 0x19)) + (~uVar23 & uVar9 ^ uVar26 & uVar23);
  uVar18 = uVar18 + iVar5;
  uVar6 = iVar5 + ((uVar16 ^ uVar2) & uVar1 ^ uVar16 & uVar2) +
                  ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
                  (uVar1 * 0x400 | uVar1 >> 0x16));
  iVar5 = uVar9 + 0xc19bf32c +
          ((uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000) ^
          (uVar18 * 0x80 | uVar18 >> 0x19)) + (~uVar18 & uVar26 ^ uVar23 & uVar18);
  uVar16 = uVar16 + iVar5;
  uVar9 = iVar5 + ((uVar2 ^ uVar1) & uVar6 ^ uVar2 & uVar1) +
                  ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
                  (uVar6 * 0x400 | uVar6 >> 0x16));
  iVar5 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
          (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
          uVar4 + 0xc42d49f2 + uVar26 + (~uVar16 & uVar23 ^ uVar18 & uVar16);
  uVar2 = uVar2 + iVar5;
  uVar29 = iVar5 + ((uVar1 ^ uVar6) & uVar9 ^ uVar1 & uVar6) +
                   ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                   (uVar9 * 0x400 | uVar9 >> 0x16));
  uVar15 = uVar31 + 0xf4a2f6bd;
  iVar5 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
          (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
          uVar31 + 0xe4613e43 + uVar23 + (~uVar2 & uVar18 ^ uVar16 & uVar2);
  uVar1 = uVar1 + iVar5;
  uVar26 = iVar5 + ((uVar6 ^ uVar9) & uVar29 ^ uVar6 & uVar9) +
                   ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
                   (uVar29 * 0x400 | uVar29 >> 0x16));
  uVar23 = uVar11 + 0xc21502b2 +
           ((uVar32 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 0x8000 | uVar32 >> 0x11) ^ uVar32 >> 1 0);
  iVar5 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
          (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
          uVar18 + 0xfc19dc6 + uVar23 + (~uVar1 & uVar16 ^ uVar2 & uVar1);
  uVar6 = uVar6 + iVar5;
  uVar24 = iVar5 + ((uVar9 ^ uVar29) & uVar26 ^ uVar9 & uVar29) +
                   ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
                   (uVar26 * 0x400 | uVar26 >> 0x16));
  uVar18 = ((uVar7 << 0xe | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 << 0x19) ^ uVar7 >> 3) + 0x98a5b eeb
           + ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^ uVar15 >>  10
             );
  iVar5 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
          (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
          uVar16 + 0x240ca1cc + uVar18 + (~uVar6 & uVar2 ^ uVar1 & uVar6);
  uVar9 = uVar9 + iVar5;
  uVar19 = iVar5 + ((uVar29 ^ uVar26) & uVar24 ^ uVar29 & uVar26) +
                   ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
                   (uVar24 * 0x400 | uVar24 >> 0x16));
  uVar20 = uVar7 + 0x494e7d80 +
           ((uVar12 << 0xe | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 << 0x19) ^ uVar12 >> 3) +
           ((uVar23 * 0x2000 | uVar23 >> 0x13) ^ (uVar23 * 0x8000 | uVar23 >> 0x11) ^ uVar23 >> 1 0);
  iVar5 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
          (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
          uVar2 + 0x2de92c6f + uVar20 + (~uVar9 & uVar1 ^ uVar6 & uVar9);
  uVar29 = uVar29 + iVar5;
  uVar17 = iVar5 + ((uVar26 ^ uVar24) & uVar19 ^ uVar26 & uVar24) +
                   ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                   (uVar19 * 0x400 | uVar19 >> 0x16));
  uVar2 = ((uVar13 << 0xe | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 << 0x19) ^ uVar13 >> 3) + uVa r12
          + ((uVar18 * 0x2000 | uVar18 >> 0x13) ^ (uVar18 * 0x8000 | uVar18 >> 0x11) ^ uVar18 >> 10)
  ;
  iVar5 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
          (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
          uVar1 + 0x4a7484aa + uVar2 + (~uVar29 & uVar6 ^ uVar9 & uVar29);
  uVar26 = uVar26 + iVar5;
  uVar1 = iVar5 + ((uVar24 ^ uVar19) & uVar17 ^ uVar24 & uVar19) +
                  ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                  (uVar17 * 0x400 | uVar17 >> 0x16));
  uVar33 = uVar13 + 0x1b8 +
           ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
           ((uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11) ^ uVar20 >> 1 0);
  iVar5 = ((uVar26 * 0x80 | uVar26 >> 0x19) ^
          (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000)) +
          uVar6 + 0x5cb0a9dc + uVar33 + (~uVar26 & uVar9 ^ uVar29 & uVar26);
  uVar24 = uVar24 + iVar5;
  uVar16 = iVar5 + ((uVar19 ^ uVar17) & uVar1 ^ uVar19 & uVar17) +
                   ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
                   (uVar1 * 0x400 | uVar1 >> 0x16));
  uVar34 = (uVar10 >> 3 ^ (uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19)) +
           uVar32 + uVar3 +
           ((uVar2 * 0x2000 | uVar2 >> 0x13) ^ (uVar2 * 0x8000 | uVar2 >> 0x11) ^ uVar2 >> 10);
  iVar5 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
          (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
          uVar9 + 0x76f988da + uVar34 + (~uVar24 & uVar29 ^ uVar26 & uVar24);
  uVar19 = uVar19 + iVar5;
  uVar6 = iVar5 + ((uVar17 ^ uVar1) & uVar16 ^ uVar17 & uVar1) +
                  ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                  (uVar16 * 0x400 | uVar16 >> 0x16));
  uVar35 = (uVar4 >> 3 ^ (uVar4 << 0xe | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 << 0x19)) +
           uVar15 + uVar10 +
           ((uVar33 * 0x2000 | uVar33 >> 0x13) ^ (uVar33 * 0x8000 | uVar33 >> 0x11) ^ uVar33 >> 1 0);
  iVar5 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
          (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
          uVar29 + 0x983e5152 + uVar35 + (~uVar19 & uVar26 ^ uVar24 & uVar19);
  uVar17 = uVar17 + iVar5;
  uVar10 = iVar5 + ((uVar1 ^ uVar16) & uVar6 ^ uVar1 & uVar16) +
                   ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
                   (uVar6 * 0x400 | uVar6 >> 0x16));
  uVar36 = ((uVar34 * 0x2000 | uVar34 >> 0x13) ^ (uVar34 * 0x8000 | uVar34 >> 0x11) ^ uVar34 >> 1 0)
           + ((uVar31 << 0xe | uVar31 >> 0x12) ^ (uVar31 >> 7 | uVar31 << 0x19) ^ uVar31 >> 3) +
             uVar4 + uVar23;
  iVar5 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
          (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
          uVar26 + 0xa831c66d + uVar36 + (~uVar17 & uVar24 ^ uVar19 & uVar17);
  uVar1 = uVar1 + iVar5;
  uVar29 = iVar5 + ((uVar16 ^ uVar6) & uVar10 ^ uVar16 & uVar6) +
                   ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                   (uVar10 * 0x400 | uVar10 >> 0x16));
  uVar30 = ((uVar35 * 0x2000 | uVar35 >> 0x13) ^ (uVar35 * 0x8000 | uVar35 >> 0x11) ^ uVar35 >> 1 0)
           + ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3) +
             uVar31 + uVar18;
  iVar5 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
          (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
          uVar24 + 0xb00327c8 + uVar30 + (~uVar1 & uVar19 ^ uVar17 & uVar1);
  uVar16 = uVar16 + iVar5;
  uVar31 = iVar5 + ((uVar6 ^ uVar10) & uVar29 ^ uVar6 & uVar10) +
                   ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
                   (uVar29 * 0x400 | uVar29 >> 0x16));
  uVar9 = uVar11 + 0x340bd75c + uVar20 +
          (uVar36 >> 10 ^ (uVar36 * 0x2000 | uVar36 >> 0x13) ^ (uVar36 * 0x8000 | uVar36 >> 0x11) );
  iVar5 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
          (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
          uVar19 + 0xbf597fc7 + uVar9 + (~uVar16 & uVar17 ^ uVar1 & uVar16);
  uVar6 = uVar6 + iVar5;
  uVar26 = iVar5 + ((uVar10 ^ uVar29) & uVar31 ^ uVar10 & uVar29) +
                   ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^
                   (uVar31 * 0x400 | uVar31 >> 0x16));
  uVar7 = (uVar2 - 0xf15f71) +
          ((uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11) ^ uVar30 >> 10 );
  iVar5 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
          (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
          uVar17 + 0xc6e00bf3 + uVar7 + (~uVar6 & uVar1 ^ uVar16 & uVar6);
  uVar10 = uVar10 + iVar5;
  uVar19 = iVar5 + ((uVar29 ^ uVar31) & uVar26 ^ uVar29 & uVar31) +
                   ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
                   (uVar26 * 0x400 | uVar26 >> 0x16));
  uVar12 = uVar33 + 0x494e7d80 +
           ((uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11) ^ uVar9 >> 10);
  iVar5 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
          (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
          uVar1 + 0xd5a79147 + uVar12 + (~uVar10 & uVar16 ^ uVar6 & uVar10);
  uVar29 = uVar29 + iVar5;
  uVar17 = iVar5 + ((uVar31 ^ uVar26) & uVar19 ^ uVar31 & uVar26) +
                   ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                   (uVar19 * 0x400 | uVar19 >> 0x16));
  uVar13 = uVar34 + 0x706e0034 +
           ((uVar7 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 0x8000 | uVar7 >> 0x11) ^ uVar7 >> 10);
  iVar5 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
          (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
          uVar16 + 0x6ca6351 + uVar13 + (~uVar29 & uVar6 ^ uVar10 & uVar29);
  uVar31 = uVar31 + iVar5;
  uVar16 = iVar5 + ((uVar26 ^ uVar19) & uVar17 ^ uVar26 & uVar19) +
                   ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                   (uVar17 * 0x400 | uVar17 >> 0x16));
  uVar3 = ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^ uVar12 >> 10 ) +
          uVar35 + 0x1b8 +
          ((uVar32 * 0x4000 | uVar32 >> 0x12) ^ (uVar32 >> 7 | uVar32 * 0x2000000) ^ uVar32 >> 3) ;
  iVar5 = ((uVar31 * 0x80 | uVar31 >> 0x19) ^
          (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000)) +
          uVar6 + 0x14292967 + uVar3 + (~uVar31 & uVar10 ^ uVar29 & uVar31);
  uVar26 = uVar26 + iVar5;
  uVar6 = iVar5 + ((uVar19 ^ uVar17) & uVar16 ^ uVar19 & uVar17) +
                  ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                  (uVar16 * 0x400 | uVar16 >> 0x16));
  uVar4 = ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3)  +
          uVar32 + uVar36 +
          ((uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11) ^ uVar13 >> 10 );
  iVar5 = ((uVar26 * 0x80 | uVar26 >> 0x19) ^
          (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000)) +
          uVar10 + 0x27b70a85 + uVar4 + (~uVar26 & uVar29 ^ uVar31 & uVar26);
  uVar19 = uVar19 + iVar5;
  uVar10 = iVar5 + ((uVar17 ^ uVar16) & uVar6 ^ uVar17 & uVar16) +
                   ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
                   (uVar6 * 0x400 | uVar6 >> 0x16));
  uVar1 = ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^ uVar23 >> 3)  +
          uVar15 + uVar30 +
          ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10);
  iVar5 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
          (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
          uVar29 + 0x2e1b2138 + uVar1 + (~uVar19 & uVar31 ^ uVar26 & uVar19);
  uVar17 = uVar17 + iVar5;
  uVar11 = ((uVar16 ^ uVar6) & uVar10 ^ uVar16 & uVar6) +
           ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
           (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar5;
  uVar23 = ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3 ) +
           uVar23 + uVar9 +
           ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^ uVar4 >> 10);
  iVar5 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
          (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
          uVar31 + 0x4d2c6dfc + uVar23 + (~uVar17 & uVar26 ^ uVar19 & uVar17);
  uVar16 = uVar16 + iVar5;
  uVar31 = ((uVar6 ^ uVar10) & uVar11 ^ uVar6 & uVar10) +
           ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
           (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar5;
  uVar27 = ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^ uVar20 >> 3 ) +
           uVar18 + uVar7 +
           ((uVar1 * 0x2000 | uVar1 >> 0x13) ^ (uVar1 * 0x8000 | uVar1 >> 0x11) ^ uVar1 >> 10);
  iVar5 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
          (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
          uVar26 + 0x53380d13 + uVar27 + (~uVar16 & uVar19 ^ uVar17 & uVar16);
  uVar6 = uVar6 + iVar5;
  uVar28 = ((uVar10 ^ uVar11) & uVar31 ^ uVar10 & uVar11) +
           ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^
           (uVar31 * 0x400 | uVar31 >> 0x16)) + iVar5;
  uVar21 = uVar12 + ((uVar2 * 0x4000 | uVar2 >> 0x12) ^ (uVar2 >> 7 | uVar2 * 0x2000000) ^
                    uVar2 >> 3) + uVar20 +
           ((uVar23 * 0x2000 | uVar23 >> 0x13) ^ (uVar23 * 0x8000 | uVar23 >> 0x11) ^ uVar23 >> 1 0);
  iVar5 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
          (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
          uVar19 + 0x650a7354 + uVar21 + (~uVar6 & uVar17 ^ uVar16 & uVar6);
  uVar10 = uVar10 + iVar5;
  uVar22 = ((uVar11 ^ uVar31) & uVar28 ^ uVar11 & uVar31) +
           ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 2 | uVar28 * 0x40000000) ^
           (uVar28 * 0x400 | uVar28 >> 0x16)) + iVar5;
  uVar15 = ((uVar33 * 0x4000 | uVar33 >> 0x12) ^ (uVar33 >> 7 | uVar33 * 0x2000000) ^ uVar33 >> 3 ) +
           uVar2 + uVar13 +
           ((uVar27 * 0x2000 | uVar27 >> 0x13) ^ (uVar27 * 0x8000 | uVar27 >> 0x11) ^ uVar27 >> 1 0);
  iVar5 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
          (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
          uVar17 + 0x766a0abb + uVar15 + (~uVar10 & uVar16 ^ uVar6 & uVar10);
  uVar11 = uVar11 + iVar5;
  uVar32 = ((uVar31 ^ uVar28) & uVar22 ^ uVar31 & uVar28) +
           ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 2 | uVar22 * 0x40000000) ^
           (uVar22 * 0x400 | uVar22 >> 0x16)) + iVar5;
  uVar26 = ((uVar34 * 0x4000 | uVar34 >> 0x12) ^ (uVar34 >> 7 | uVar34 * 0x2000000) ^ uVar34 >> 3 ) +
           uVar33 + uVar3 +
           ((uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11) ^ uVar21 >> 1 0);
  iVar5 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
          (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
          uVar16 + 0x81c2c92e + uVar26 + (~uVar11 & uVar6 ^ uVar10 & uVar11);
  uVar31 = uVar31 + iVar5;
  uVar29 = ((uVar28 ^ uVar22) & uVar32 ^ uVar28 & uVar22) +
           ((uVar32 >> 0xd | uVar32 * 0x80000) ^ (uVar32 >> 2 | uVar32 * 0x40000000) ^
           (uVar32 * 0x400 | uVar32 >> 0x16)) + iVar5;
  uVar16 = ((uVar35 * 0x4000 | uVar35 >> 0x12) ^ (uVar35 >> 7 | uVar35 * 0x2000000) ^ uVar35 >> 3 ) +
           uVar34 + uVar4 +
           ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^ uVar15 >> 1 0);
  iVar5 = ((uVar31 * 0x80 | uVar31 >> 0x19) ^
          (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000)) +
          uVar6 + 0x92722c85 + uVar16 + (~uVar31 & uVar10 ^ uVar11 & uVar31);
  uVar28 = uVar28 + iVar5;
  uVar24 = ((uVar22 ^ uVar32) & uVar29 ^ uVar22 & uVar32) +
           ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
           (uVar29 * 0x400 | uVar29 >> 0x16)) + iVar5;
  uVar17 = ((uVar36 * 0x4000 | uVar36 >> 0x12) ^ (uVar36 >> 7 | uVar36 * 0x2000000) ^ uVar36 >> 3 ) +
           uVar35 + uVar1 +
           ((uVar26 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 0x8000 | uVar26 >> 0x11) ^ uVar26 >> 1 0);
  iVar5 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
          (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 6 | uVar28 * 0x4000000)) +
          uVar10 + 0xa2bfe8a1 + uVar17 + (~uVar28 & uVar11 ^ uVar31 & uVar28);
  uVar22 = uVar22 + iVar5;
  uVar20 = iVar5 + ((uVar32 ^ uVar29) & uVar24 ^ uVar32 & uVar29) +
                   ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
                   (uVar24 * 0x400 | uVar24 >> 0x16));
  uVar18 = ((uVar30 * 0x4000 | uVar30 >> 0x12) ^ (uVar30 >> 7 | uVar30 * 0x2000000) ^ uVar30 >> 3 ) +
           uVar36 + uVar23 +
           ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^ uVar16 >> 1 0);
  iVar5 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
          (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000)) +
          uVar11 + 0xa81a664b + uVar18 + (~uVar22 & uVar31 ^ uVar28 & uVar22);
  uVar32 = uVar32 + iVar5;
  uVar10 = iVar5 + ((uVar29 ^ uVar24) & uVar20 ^ uVar29 & uVar24) +
                   ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 2 | uVar20 * 0x40000000) ^
                   (uVar20 * 0x400 | uVar20 >> 0x16));
  uVar11 = ((uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^ uVar9 >> 3) +
           uVar30 + uVar27 +
           ((uVar17 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 0x8000 | uVar17 >> 0x11) ^ uVar17 >> 1 0);
  iVar5 = ((uVar32 * 0x80 | uVar32 >> 0x19) ^
          (uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 >> 6 | uVar32 * 0x4000000)) +
          uVar31 + 0xc24b8b70 + uVar11 + (~uVar32 & uVar28 ^ uVar22 & uVar32);
  uVar29 = uVar29 + iVar5;
  uVar19 = iVar5 + ((uVar24 ^ uVar20) & uVar10 ^ uVar24 & uVar20) +
                   ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                   (uVar10 * 0x400 | uVar10 >> 0x16));
  uVar31 = ((uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000) ^ uVar7 >> 3) +
           uVar9 + uVar21 +
           ((uVar18 * 0x2000 | uVar18 >> 0x13) ^ (uVar18 * 0x8000 | uVar18 >> 0x11) ^ uVar18 >> 1 0);
  iVar5 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
          (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
          uVar28 + 0xc76c51a3 + uVar31 + (~uVar29 & uVar22 ^ uVar32 & uVar29);
  uVar24 = uVar24 + iVar5;
  uVar28 = iVar5 + ((uVar20 ^ uVar10) & uVar19 ^ uVar20 & uVar10) +
                   ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                   (uVar19 * 0x400 | uVar19 >> 0x16));
  uVar6 = ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3)  +
          uVar7 + uVar15 +
          ((uVar11 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 0x8000 | uVar11 >> 0x11) ^ uVar11 >> 10 );
  iVar5 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
          (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
          uVar22 + 0xd192e819 + uVar6 + (~uVar24 & uVar32 ^ uVar29 & uVar24);
  uVar20 = uVar20 + iVar5;
  uVar2 = iVar5 + ((uVar10 ^ uVar19) & uVar28 ^ uVar10 & uVar19) +
                  ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 2 | uVar28 * 0x40000000) ^
                  (uVar28 * 0x400 | uVar28 >> 0x16));
  uVar12 = ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^ uVar13 >> 3 ) +
           uVar12 + uVar26 +
           ((uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11) ^ uVar31 >> 1 0);
  iVar5 = ((uVar20 * 0x80 | uVar20 >> 0x19) ^
          (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 6 | uVar20 * 0x4000000)) +
          uVar32 + 0xd6990624 + uVar12 + (~uVar20 & uVar29 ^ uVar24 & uVar20);
  uVar10 = uVar10 + iVar5;
  uVar9 = iVar5 + ((uVar19 ^ uVar28) & uVar2 ^ uVar19 & uVar28) +
                  ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
                  (uVar2 * 0x400 | uVar2 >> 0x16));
  uVar32 = ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) +
           uVar13 + uVar16 +
           ((uVar6 * 0x2000 | uVar6 >> 0x13) ^ (uVar6 * 0x8000 | uVar6 >> 0x11) ^ uVar6 >> 10);
  iVar5 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
          (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
          uVar29 + 0xf40e3585 + uVar32 + (~uVar10 & uVar24 ^ uVar20 & uVar10);
  uVar19 = uVar19 + iVar5;
  uVar22 = iVar5 + ((uVar28 ^ uVar2) & uVar9 ^ uVar28 & uVar2) +
                   ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                   (uVar9 * 0x400 | uVar9 >> 0x16));
  uVar29 = ((uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000) ^ uVar4 >> 3) +
           uVar3 + uVar17 +
           ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^ uVar12 >> 1 0);
  iVar5 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
          (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
          uVar24 + 0x106aa070 + uVar29 + (~uVar19 & uVar20 ^ uVar10 & uVar19);
  uVar28 = uVar28 + iVar5;
  uVar33 = iVar5 + ((uVar2 ^ uVar9) & uVar22 ^ uVar2 & uVar9) +
                   ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 2 | uVar22 * 0x40000000) ^
                   (uVar22 * 0x400 | uVar22 >> 0x16));
  uVar24 = ((uVar32 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 0x8000 | uVar32 >> 0x11) ^ uVar32 >> 1 0)
           + ((uVar1 * 0x4000 | uVar1 >> 0x12) ^ (uVar1 >> 7 | uVar1 * 0x2000000) ^ uVar1 >> 3) +
             uVar4 + uVar18;
  iVar5 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
          (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 6 | uVar28 * 0x4000000)) +
          uVar20 + 0x19a4c116 + uVar24 + (~uVar28 & uVar10 ^ uVar19 & uVar28);
  uVar2 = uVar2 + iVar5;
  uVar30 = iVar5 + ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 2 | uVar33 * 0x40000000) ^
                   (uVar33 * 0x400 | uVar33 >> 0x16)) + ((uVar9 ^ uVar22) & uVar33 ^ uVar9 & uVar 22)
  ;
  uVar35 = uVar1 + (uVar23 >> 3 ^
                   (uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000)) + uVa r11
           + ((uVar29 * 0x2000 | uVar29 >> 0x13) ^ (uVar29 * 0x8000 | uVar29 >> 0x11) ^ uVar29 >>  10
             );
  iVar5 = uVar10 + 0x1e376c08 + uVar35 +
          ((uVar2 * 0x80 | uVar2 >> 0x19) ^
          (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
          (~uVar2 & uVar19 ^ uVar28 & uVar2);
  uVar9 = uVar9 + iVar5;
  uVar1 = iVar5 + ((uVar22 ^ uVar33) & uVar30 ^ uVar22 & uVar33) +
                  ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
                  (uVar30 * 0x400 | uVar30 >> 0x16));
  uVar4 = ((uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000) ^ uVar27 >> 3)  +
          uVar23 + uVar31 +
          ((uVar24 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 0x8000 | uVar24 >> 0x11) ^ uVar24 >> 10 );
  iVar5 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
          (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
          uVar19 + 0x2748774c + uVar4 + (~uVar9 & uVar28 ^ uVar2 & uVar9);
  uVar22 = uVar22 + iVar5;
  uVar34 = iVar5 + ((uVar33 ^ uVar30) & uVar1 ^ uVar33 & uVar30) +
                   ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
                   (uVar1 * 0x400 | uVar1 >> 0x16));
  uVar7 = ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^ uVar21 >> 3)  +
          uVar27 + uVar6 +
          ((uVar35 * 0x2000 | uVar35 >> 0x13) ^ (uVar35 * 0x8000 | uVar35 >> 0x11) ^ uVar35 >> 10 );
  iVar5 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
          (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000)) +
          uVar28 + 0x34b0bcb5 + uVar7 + (~uVar22 & uVar2 ^ uVar9 & uVar22);
  uVar33 = uVar33 + iVar5;
  uVar10 = iVar5 + ((uVar30 ^ uVar1) & uVar34 ^ uVar30 & uVar1) +
                   ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 2 | uVar34 * 0x40000000) ^
                   (uVar34 * 0x400 | uVar34 >> 0x16));
  uVar19 = ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3 ) +
           uVar21 + uVar12 +
           ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^ uVar4 >> 10);
  iVar5 = ((uVar33 * 0x80 | uVar33 >> 0x19) ^
          (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 >> 6 | uVar33 * 0x4000000)) +
          uVar2 + 0x391c0cb3 + uVar19 + (~uVar33 & uVar9 ^ uVar22 & uVar33);
  uVar30 = uVar30 + iVar5;
  uVar21 = iVar5 + ((uVar1 ^ uVar34) & uVar10 ^ uVar1 & uVar34) +
                   ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                   (uVar10 * 0x400 | uVar10 >> 0x16));
  uVar15 = ((uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000) ^ uVar26 >> 3 ) +
           uVar15 + uVar32 +
           ((uVar7 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 0x8000 | uVar7 >> 0x11) ^ uVar7 >> 10);
  iVar5 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
          (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
          uVar9 + 0x4ed8aa4a + uVar15 + (~uVar30 & uVar22 ^ uVar33 & uVar30);
  uVar1 = uVar1 + iVar5;
  uVar20 = iVar5 + ((uVar34 ^ uVar10) & uVar21 ^ uVar34 & uVar10) +
                   ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
                   (uVar21 * 0x400 | uVar21 >> 0x16));
  uVar13 = ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^ uVar16 >> 3 ) +
           uVar26 + uVar29 +
           ((uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^ uVar19 >> 1 0);
  iVar5 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
          (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
          uVar22 + 0x5b9cca4f + uVar13 + (~uVar1 & uVar33 ^ uVar30 & uVar1);
  uVar34 = uVar34 + iVar5;
  uVar26 = iVar5 + ((uVar10 ^ uVar21) & uVar20 ^ uVar10 & uVar21) +
                   ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 2 | uVar20 * 0x40000000) ^
                   (uVar20 * 0x400 | uVar20 >> 0x16));
  uVar3 = ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3)  +
          uVar16 + uVar24 +
          ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^ uVar15 >> 10 );
  iVar5 = ((uVar34 * 0x80 | uVar34 >> 0x19) ^
          (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 >> 6 | uVar34 * 0x4000000)) +
          uVar33 + 0x682e6ff3 + uVar3 + (~uVar34 & uVar30 ^ uVar1 & uVar34);
  uVar10 = uVar10 + iVar5;
  uVar9 = iVar5 + ((uVar21 ^ uVar20) & uVar26 ^ uVar21 & uVar20) +
                  ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
                  (uVar26 * 0x400 | uVar26 >> 0x16));
  uVar16 = ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^ uVar18 >> 3 ) +
           uVar17 + uVar35 +
           ((uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11) ^ uVar13 >> 1 0);
  iVar5 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
          (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
          uVar30 + 0x748f82ee + uVar16 + (~uVar10 & uVar1 ^ uVar34 & uVar10);
  uVar21 = uVar21 + iVar5;
  uVar23 = iVar5 + ((uVar20 ^ uVar26) & uVar9 ^ uVar20 & uVar26) +
                   ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                   (uVar9 * 0x400 | uVar9 >> 0x16));
  uVar2 = ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3)  +
          uVar18 + uVar4 +
          ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10);
  iVar5 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
          (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000)) +
          uVar1 + 0x78a5636f + uVar2 + (~uVar21 & uVar34 ^ uVar10 & uVar21);
  uVar20 = uVar20 + iVar5;
  uVar4 = iVar5 + ((uVar26 ^ uVar9) & uVar23 ^ uVar26 & uVar9) +
                  ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                  (uVar23 * 0x400 | uVar23 >> 0x16));
  uVar1 = ((uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 >> 7 | uVar31 * 0x2000000) ^ uVar31 >> 3)  +
          uVar11 + uVar7 +
          ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^ uVar16 >> 10 );
  iVar5 = ((uVar20 * 0x80 | uVar20 >> 0x19) ^
          (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 6 | uVar20 * 0x4000000)) +
          uVar34 + 0x84c87814 + uVar1 + (~uVar20 & uVar10 ^ uVar21 & uVar20);
  uVar26 = uVar26 + iVar5;
  uVar18 = ((uVar9 ^ uVar23) & uVar4 ^ uVar9 & uVar23) +
           ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
           (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar5;
  uVar2 = ((uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000) ^ uVar6 >> 3) +
          uVar31 + uVar19 +
          ((uVar2 * 0x2000 | uVar2 >> 0x13) ^ (uVar2 * 0x8000 | uVar2 >> 0x11) ^ uVar2 >> 10);
  iVar5 = uVar10 + 0x8cc70208 + uVar2 +
          ((uVar26 * 0x80 | uVar26 >> 0x19) ^
          (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000)) +
          (~uVar26 & uVar21 ^ uVar20 & uVar26);
  uVar9 = uVar9 + iVar5;
  uVar7 = ((uVar23 ^ uVar4) & uVar18 ^ uVar23 & uVar4) +
          ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
          (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar5;
  uVar1 = ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3)  +
          uVar6 + uVar15 +
          ((uVar1 * 0x2000 | uVar1 >> 0x13) ^ (uVar1 * 0x8000 | uVar1 >> 0x11) ^ uVar1 >> 10);
  iVar5 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
          (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
          uVar21 + 0x90befffa + uVar1 + (~uVar9 & uVar20 ^ uVar26 & uVar9);
  uVar23 = uVar23 + iVar5;
  uVar10 = ((uVar4 ^ uVar18) & uVar7 ^ uVar4 & uVar18) +
           ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
           (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar5;
  uVar2 = ((uVar32 * 0x4000 | uVar32 >> 0x12) ^ (uVar32 >> 7 | uVar32 * 0x2000000) ^ uVar32 >> 3)  +
          uVar12 + uVar13 +
          ((uVar2 * 0x2000 | uVar2 >> 0x13) ^ (uVar2 * 0x8000 | uVar2 >> 0x11) ^ uVar2 >> 10);
  iVar5 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
          (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
          uVar20 + 0xa4506ceb + uVar2 + (~uVar23 & uVar26 ^ uVar9 & uVar23);
  uVar4 = uVar4 + iVar5;
  uVar12 = ((uVar18 ^ uVar7) & uVar10 ^ uVar18 & uVar7) +
           ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
           (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar5;
  iVar5 = uVar32 + 0xbef9a3f7 +
          ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^ uVar29 >> 3)  +
          uVar3 + ((uVar1 * 0x2000 | uVar1 >> 0x13) ^ (uVar1 * 0x8000 | uVar1 >> 0x11) ^ uVar1 >>  10
                  ) + uVar26 +
          ((uVar4 >> 6 | uVar4 * 0x4000000) ^ (uVar4 >> 0xb | uVar4 * 0x200000) ^
          (uVar4 * 0x80 | uVar4 >> 0x19)) + (~uVar4 & uVar9 ^ uVar23 & uVar4);
  uVar18 = uVar18 + iVar5;
  uVar1 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
          (uVar12 * 0x400 | uVar12 >> 0x16)) + ((uVar7 ^ uVar10) & uVar12 ^ uVar7 & uVar10) + iVa r5;
  iVar5 = uVar9 + uVar29 + 0xc67178f2 +
                  (uVar24 >> 3 ^
                  (uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000)) + uVar 16
                  + ((uVar2 * 0x8000 | uVar2 >> 0x11) ^ (uVar2 * 0x2000 | uVar2 >> 0x13) ^
                    uVar2 >> 10) +
          ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
          (uVar18 * 0x80 | uVar18 >> 0x19)) + (~uVar18 & uVar23 ^ uVar4 & uVar18);
  *(uint *)(param_2 + 2) = uVar7 + 0x510e527f + iVar5;
  *(uint *)((long)param_2 + 0x14) = uVar18 + 0x9b05688c;
  *(uint *)(param_2 + 3) = uVar4 + 0x1f83d9ab;
  *(uint *)((long)param_2 + 0x1c) = uVar23 + 0x5be0cd19;
  *param_2 = CONCAT44(uVar1 + 0xbb67ae85,
                      ((uVar1 >> 2 | uVar1 * 0x40000000) ^ (uVar1 >> 0xd | uVar1 * 0x80000) ^
                      (uVar1 * 0x400 | uVar1 >> 0x16)) + 0x6a09e667 +
                      ((uVar10 ^ uVar12) & uVar1 ^ uVar10 & uVar12) + iVar5);
  param_2[1] = CONCAT44(uVar10 + 0xa54ff53a,uVar12 + 0x3c6ef372);
  return;
}

