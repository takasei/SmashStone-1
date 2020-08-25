xof 0302txt 0064
template Header {
 <3D82AB43-62DA-11cf-AB39-0020AF71E433>
 WORD major;
 WORD minor;
 DWORD flags;
}

template Vector {
 <3D82AB5E-62DA-11cf-AB39-0020AF71E433>
 FLOAT x;
 FLOAT y;
 FLOAT z;
}

template Coords2d {
 <F6F23F44-7686-11cf-8F52-0040333594A3>
 FLOAT u;
 FLOAT v;
}

template Matrix4x4 {
 <F6F23F45-7686-11cf-8F52-0040333594A3>
 array FLOAT matrix[16];
}

template ColorRGBA {
 <35FF44E0-6C7C-11cf-8F52-0040333594A3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
 FLOAT alpha;
}

template ColorRGB {
 <D3E16E81-7835-11cf-8F52-0040333594A3>
 FLOAT red;
 FLOAT green;
 FLOAT blue;
}

template IndexedColor {
 <1630B820-7842-11cf-8F52-0040333594A3>
 DWORD index;
 ColorRGBA indexColor;
}

template Boolean {
 <4885AE61-78E8-11cf-8F52-0040333594A3>
 WORD truefalse;
}

template Boolean2d {
 <4885AE63-78E8-11cf-8F52-0040333594A3>
 Boolean u;
 Boolean v;
}

template MaterialWrap {
 <4885AE60-78E8-11cf-8F52-0040333594A3>
 Boolean u;
 Boolean v;
}

template TextureFilename {
 <A42790E1-7810-11cf-8F52-0040333594A3>
 STRING filename;
}

template Material {
 <3D82AB4D-62DA-11cf-AB39-0020AF71E433>
 ColorRGBA faceColor;
 FLOAT power;
 ColorRGB specularColor;
 ColorRGB emissiveColor;
 [...]
}

template MeshFace {
 <3D82AB5F-62DA-11cf-AB39-0020AF71E433>
 DWORD nFaceVertexIndices;
 array DWORD faceVertexIndices[nFaceVertexIndices];
}

template MeshFaceWraps {
 <4885AE62-78E8-11cf-8F52-0040333594A3>
 DWORD nFaceWrapValues;
 Boolean2d faceWrapValues;
}

template MeshTextureCoords {
 <F6F23F40-7686-11cf-8F52-0040333594A3>
 DWORD nTextureCoords;
 array Coords2d textureCoords[nTextureCoords];
}

template MeshMaterialList {
 <F6F23F42-7686-11cf-8F52-0040333594A3>
 DWORD nMaterials;
 DWORD nFaceIndexes;
 array DWORD faceIndexes[nFaceIndexes];
 [Material]
}

template MeshNormals {
 <F6F23F43-7686-11cf-8F52-0040333594A3>
 DWORD nNormals;
 array Vector normals[nNormals];
 DWORD nFaceNormals;
 array MeshFace faceNormals[nFaceNormals];
}

template MeshVertexColors {
 <1630B821-7842-11cf-8F52-0040333594A3>
 DWORD nVertexColors;
 array IndexedColor vertexColors[nVertexColors];
}

template Mesh {
 <3D82AB44-62DA-11cf-AB39-0020AF71E433>
 DWORD nVertices;
 array Vector vertices[nVertices];
 DWORD nFaces;
 array MeshFace faces[nFaces];
 [...]
}

Header{
1;
0;
1;
}

Mesh {
 56;
 0.30895;2.05044;99.07835;,
 0.30895;2.05044;-98.93841;,
 0.30895;0.02044;-96.33376;,
 0.30895;0.02044;97.12486;,
 4.62452;2.05044;99.07835;,
 4.62451;2.05044;-98.93841;,
 0.30895;2.05044;-98.93841;,
 0.30895;2.05044;99.07835;,
 4.62452;4.05130;99.07835;,
 4.62451;4.05130;-98.93841;,
 8.94009;4.05130;99.07835;,
 8.94008;4.05130;-98.93841;,
 8.94009;6.05374;99.07835;,
 8.94008;6.05374;-98.93841;,
 13.25562;6.05374;99.07835;,
 13.25561;6.05374;-98.93841;,
 13.25562;8.04853;99.07835;,
 13.25561;8.04853;-98.93841;,
 17.57117;8.04853;99.07835;,
 17.57117;8.04853;-98.93841;,
 17.57117;10.05203;99.07835;,
 17.57117;10.05203;-98.93841;,
 21.88674;10.05203;99.07835;,
 21.88671;10.05203;-98.93841;,
 21.88674;12.05990;99.07835;,
 21.88671;12.05990;-98.93841;,
 26.20231;12.05990;99.07835;,
 26.11882;12.07729;-98.93841;,
 47.69658;24.11675;-98.93841;,
 47.69660;24.11675;99.07835;,
 104.47279;24.11675;99.07835;,
 104.47279;24.11675;-98.93841;,
 26.11884;14.10729;99.07835;,
 26.11882;14.10729;-98.93841;,
 26.11882;12.07729;-98.93841;,
 26.20231;12.05990;99.07835;,
 30.43438;14.10729;99.07835;,
 30.43438;14.10729;-98.93841;,
 26.11882;14.10729;-98.93841;,
 26.11884;14.10729;99.07835;,
 30.43438;16.10815;99.07835;,
 30.43438;16.10815;-98.93841;,
 34.74995;16.10815;99.07835;,
 34.74993;16.10815;-98.93841;,
 34.74995;18.11059;99.07835;,
 34.74993;18.11059;-98.93841;,
 39.06550;18.11059;99.07835;,
 39.06547;18.11059;-98.93841;,
 39.06550;20.10538;99.07835;,
 39.06547;20.10538;-98.93841;,
 43.38104;20.10538;99.07835;,
 43.38104;20.10538;-98.93841;,
 43.38104;22.10888;99.07835;,
 43.38104;22.10888;-98.93841;,
 47.69660;22.10888;99.07835;,
 47.69658;22.10888;-98.93841;;
 
 36;
 4;0,1,2,3;,
 4;4,5,6,7;,
 4;8,9,5,4;,
 4;10,11,9,8;,
 4;12,13,11,10;,
 4;14,15,13,12;,
 4;16,17,15,14;,
 4;18,19,17,16;,
 4;20,21,19,18;,
 4;22,23,21,20;,
 4;24,25,23,22;,
 4;26,27,25,24;,
 3;28,29,30;,
 3;30,31,28;,
 4;32,33,34,35;,
 4;36,37,38,39;,
 4;40,41,37,36;,
 4;42,43,41,40;,
 4;44,45,43,42;,
 4;46,47,45,44;,
 4;48,49,47,46;,
 4;50,51,49,48;,
 4;52,53,51,50;,
 4;54,55,53,52;,
 4;3,2,1,0;,
 4;4,5,9,8;,
 4;10,11,13,12;,
 4;14,15,17,16;,
 4;18,19,21,20;,
 4;22,23,25,24;,
 4;35,34,33,32;,
 4;36,37,41,40;,
 4;42,43,45,44;,
 4;46,47,49,48;,
 4;50,51,53,52;,
 4;54,29,28,55;;
 
 MeshMaterialList {
  1;
  36;
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0;;
  Material {
   0.385600;0.385600;0.385600;1.000000;;
   5.000000;
   0.000000;0.000000;0.000000;;
   0.000000;0.000000;0.000000;;
  }
 }
 MeshNormals {
  19;
  -1.000000;0.000000;0.000000;,
  0.000000;1.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  -0.002055;0.999998;0.000044;,
  -0.999793;-0.020372;0.000211;,
  -1.000000;0.000000;0.000000;,
  -1.000000;0.000000;0.000000;,
  1.000000;0.000000;0.000000;,
  1.000000;0.000000;-0.000000;,
  1.000000;0.000000;-0.000000;,
  1.000000;0.000000;-0.000000;,
  1.000000;0.000000;-0.000000;,
  0.999793;0.020372;-0.000211;,
  1.000000;0.000000;-0.000000;,
  1.000000;0.000000;-0.000000;,
  -1.000000;0.000000;0.000000;;
  36;
  4;0,0,0,0;,
  4;1,1,1,1;,
  4;2,2,2,2;,
  4;1,1,1,1;,
  4;3,3,3,3;,
  4;1,1,1,1;,
  4;4,4,4,4;,
  4;1,1,1,1;,
  4;0,0,0,0;,
  4;1,1,1,1;,
  4;5,5,5,5;,
  4;6,6,6,6;,
  3;1,1,1;,
  3;1,1,1;,
  4;7,7,7,7;,
  4;1,1,1,1;,
  4;0,0,0,0;,
  4;1,1,1,1;,
  4;8,8,8,8;,
  4;1,1,1,1;,
  4;9,9,9,9;,
  4;1,1,1,1;,
  4;0,0,0,0;,
  4;1,1,1,1;,
  4;10,10,10,10;,
  4;11,11,11,11;,
  4;12,12,12,12;,
  4;13,13,13,13;,
  4;10,10,10,10;,
  4;14,14,14,14;,
  4;15,15,15,15;,
  4;10,10,10,10;,
  4;16,16,16,16;,
  4;17,17,17,17;,
  4;10,10,10,10;,
  4;18,18,18,18;;
 }
 MeshTextureCoords {
  56;
  0.000000;0.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.888890;,
  1.000000;0.888890;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.888890;,
  1.000000;0.888890;,
  0.000000;0.777780;,
  1.000000;0.777780;,
  0.000000;0.777780;,
  1.000000;0.777780;,
  0.000000;0.666670;,
  1.000000;0.666670;,
  0.000000;0.666670;,
  1.000000;0.666670;,
  0.000000;0.555560;,
  1.000000;0.555560;,
  0.000000;0.555560;,
  1.000000;0.555560;,
  0.000000;0.444440;,
  1.000000;0.444440;,
  0.000000;0.444440;,
  1.000000;0.444440;,
  0.000000;0.333330;,
  1.000000;0.333330;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  0.000000;0.000000;,
  1.000000;0.000000;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.888890;,
  1.000000;0.888890;,
  1.000000;1.000000;,
  0.000000;1.000000;,
  0.000000;0.888890;,
  1.000000;0.888890;,
  0.000000;0.777780;,
  1.000000;0.777780;,
  0.000000;0.777780;,
  1.000000;0.777780;,
  0.000000;0.666670;,
  1.000000;0.666670;,
  0.000000;0.666670;,
  1.000000;0.666670;,
  0.000000;0.555560;,
  1.000000;0.555560;,
  0.000000;0.555560;,
  1.000000;0.555560;,
  0.000000;0.444440;,
  1.000000;0.444440;;
 }
}
