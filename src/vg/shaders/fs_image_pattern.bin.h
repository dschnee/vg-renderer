static const uint8_t fs_image_pattern_glsl[238] =
{
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x05, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd3, 0x00, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, // ..........varyin
	0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, // g highp vec4 v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, // olor0;.varying h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ighp vec2 v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, // oord0;.uniform s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x3b, 0x0a, // ampler2D s_tex;.
	0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // void main ().{. 
	0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, //  lowp vec4 tmpva
	0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, // r_1;.  tmpvar_1 
	0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, // = texture2D (s_t
	0x65, 0x78, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, // ex, v_texcoord0)
	0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ;.  gl_FragColor
	0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, //  = (v_color0 * t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // mpvar_1);.}...
};
static const uint8_t fs_image_pattern_spv[3001] =
{
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x02, 0x00, 0x0c, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x11, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0c, 0x73, 0x5f, // Sampler.......s_
	0x74, 0x65, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0x00, 0x00, 0x01, 0x00, // texTexture......
	0x84, 0x0b, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, // ......#.........
	0x6f, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, // ob..............
	0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, // ........GLSL.std
	0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // .450............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x74, 0x14, 0x00, 0x00, // main....w...t...
	0xd1, 0x0d, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // ................
	0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0e, 0x00, // ....main........
	0x99, 0x0f, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // ....bgfxTexture2
	0x44, 0x28, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x2d, 0x42, 0x67, 0x66, 0x78, 0x53, 0x61, 0x6d, // D(struct-BgfxSam
	0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x2d, 0x70, 0x31, 0x2d, 0x74, 0x32, 0x31, 0x31, 0x3b, 0x76, // pler2D-p1-t211;v
	0x66, 0x32, 0x3b, 0x00, 0x05, 0x00, 0x05, 0x00, 0x67, 0x12, 0x00, 0x00, 0x6d, 0x5f, 0x73, 0x61, // f2;.....g...m_sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa3, 0x14, 0x00, 0x00, // mpler...........
	0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // m_texture.......
	0xe7, 0x15, 0x00, 0x00, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, // ...._coord......
	0x35, 0x13, 0x00, 0x00, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, // 5...vec4_splat(f
	0x31, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x5f, 0x78, 0x00, 0x00, // 1;.........._x..
	0x05, 0x00, 0x07, 0x00, 0x16, 0x0e, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, // ........@main(vf
	0x34, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x76, 0x66, 0x34, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // 4;vf2;vf4;......
	0x6e, 0x62, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, // nb..v_color0....
	0x05, 0x00, 0x05, 0x00, 0x8f, 0x41, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // .....A..v_texcoo
	0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, // rd0......J..gl_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, // ragData_0_......
	0xa0, 0x11, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x56, 0x6f, 0x69, 0x64, 0x46, 0x72, 0x61, // ....bgfx_VoidFra
	0x67, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xd6, 0x5d, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, // g........]..para
	0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x41, 0x12, 0x00, 0x00, 0x74, 0x65, 0x78, 0x65, // m.......A...texe
	0x6c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x0f, 0x0d, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, // l...........s_te
	0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, // xSampler........
	0x4b, 0x0f, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // K...s_texTexture
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xa7, 0x54, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, // .........T..para
	0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, // m........A..v_co
	0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x77, 0x0e, 0x00, 0x00, // lor0........w...
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // v_color0........
	0x2c, 0x3f, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, // ,?..v_texcoord0.
	0x05, 0x00, 0x05, 0x00, 0x74, 0x14, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // ....t...v_texcoo
	0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xce, 0x1c, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, // rd0.........gl_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // ragData_0_......
	0xc9, 0x47, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // .G..param.......
	0xab, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // .U..param.......
	0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, // ....param.......
	0xd1, 0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, // ....gl_FragData_
	0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, // 0_..........$Glo
	0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // bal.............
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // u_viewRect......
	0x8c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, // ........u_viewTe
	0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // xel.............
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x8c, 0x00, 0x00, 0x00, // u_view..........
	0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, // ....u_invView...
	0x06, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, // ............u_pr
	0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // oj..............
	0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // u_invProj.......
	0x8c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // ........u_viewPr
	0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // oj..............
	0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, // u_invViewProj...
	0x06, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ............u_mo
	0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // del.............
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, // u_modelView.....
	0x8c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, // ........u_modelV
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x8c, 0x00, 0x00, 0x00, // iewProj.........
	0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, // ....u_alphaRef4.
	0x47, 0x00, 0x04, 0x00, 0x0f, 0x0d, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G.......".......
	0x47, 0x00, 0x04, 0x00, 0x0f, 0x0d, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G.......!.......
	0x47, 0x00, 0x04, 0x00, 0x4b, 0x0f, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...K...".......
	0x47, 0x00, 0x04, 0x00, 0x4b, 0x0f, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...K...!.......
	0x47, 0x00, 0x04, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...w...........
	0x47, 0x00, 0x04, 0x00, 0x74, 0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // G...t...........
	0x47, 0x00, 0x04, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...............
	0x47, 0x00, 0x04, 0x00, 0xe4, 0x07, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // G...........@...
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, // #.......H.......
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#... ...H...
	0x8c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // `...H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x8c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#... ...H...
	0x8c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // `...H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x8c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // H...............
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...........
	0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, // ........H.......
	0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ....#.......H...
	0x8c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x48, 0x00, 0x05, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...........#...
	0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, //  ...G...........
	0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, // ........!.......
	0x08, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0x79, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, // y...............
	0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x96, 0x00, 0x00, 0x00, // .... ...........
	0x0d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0x13, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ................
	0x13, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0x90, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ................
	0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x06, 0x00, // ............!...
	0x0a, 0x08, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x79, 0x04, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00, // ........y.......
	0x90, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // .... ...........
	0x0d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ....!...........
	0x8a, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // .... ...........
	0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0x69, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ....!...i.......
	0x9a, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, // ................
	0xfe, 0x01, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, // ........+.......
	0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x04, 0x00, 0x00, // ........;...y...
	0x0f, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x13, 0x03, 0x00, 0x00, // ........;.......
	0x4b, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // K....... .......
	0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, // ........;.......
	0x77, 0x0e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, // w....... .......
	0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, 0x02, 0x00, 0x00, // ........;.......
	0x74, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // t....... .......
	0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, // ........;.......
	0xd1, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, // ............e...
	0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, //  .......+.......
	0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xe4, 0x07, 0x00, 0x00, // j... ...........
	0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x8c, 0x00, 0x00, 0x00, // e...j...........
	0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // ........e...e...
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // e...e...e...e...
	0xe4, 0x07, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ....e...e.......
	0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 6...............
	0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // ........Sa..;...
	0x9a, 0x02, 0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // .....G......;...
	0x90, 0x02, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // .....U......;...
	0x9a, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // ............=...
	0x1d, 0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // .....A..w...=...
	0x13, 0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x74, 0x14, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // ....,?..t...>...
	0xc9, 0x47, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, 0x55, 0x00, 0x00, // .G...A..>....U..
	0x2c, 0x3f, 0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xbd, 0x26, 0x00, 0x00, // ,?..9........&..
	0x16, 0x0e, 0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, // .....G...U......
	0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xce, 0x1c, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, // =...............
	0x3e, 0x00, 0x03, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0xce, 0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, // >...............
	0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x99, 0x0f, 0x00, 0x00, // 8...6...........
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x08, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x79, 0x04, 0x00, 0x00, // ........7...y...
	0x67, 0x12, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x13, 0x03, 0x00, 0x00, 0xa3, 0x14, 0x00, 0x00, // g...7...........
	0x37, 0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0xe7, 0x15, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, // 7...............
	0xca, 0x1c, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x96, 0x00, 0x00, 0x00, 0xc6, 0x19, 0x00, 0x00, // ....=...........
	0xa3, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xca, 0x48, 0x00, 0x00, // ....=........H..
	0x67, 0x12, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0xfe, 0x01, 0x00, 0x00, 0xf7, 0x3e, 0x00, 0x00, // g...V........>..
	0xc6, 0x19, 0x00, 0x00, 0xca, 0x48, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, // .....H..=.......
	0xfe, 0x24, 0x00, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, // .$......W.......
	0x82, 0x59, 0x00, 0x00, 0xf7, 0x3e, 0x00, 0x00, 0xfe, 0x24, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, // .Y...>...$......
	0x82, 0x59, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, // .Y..8...6.......
	0x35, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, // 5...........7...
	0x8a, 0x02, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x2e, 0x5f, 0x00, 0x00, // ............._..
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe0, 0x5b, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, // =........[......
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x25, 0x53, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, // =.......%S......
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xc5, 0x3d, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, // =........=......
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd8, 0x3d, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, // =........=......
	0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x56, 0x5b, 0x00, 0x00, 0xe0, 0x5b, 0x00, 0x00, // P.......V[...[..
	0x25, 0x53, 0x00, 0x00, 0xc5, 0x3d, 0x00, 0x00, 0xd8, 0x3d, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, // %S...=...=......
	0x56, 0x5b, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, // V[..8...6.......
	0x16, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, // ........i...7...
	0x9a, 0x02, 0x00, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, // ....nb..7.......
	0x8f, 0x41, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x8c, 0x4a, 0x00, 0x00, // .A..7........J..
	0xf8, 0x00, 0x02, 0x00, 0xc0, 0x53, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, // .....S..;.......
	0xd6, 0x5d, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, // .]......;.......
	0xa7, 0x54, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd6, 0x5d, 0x00, 0x00, // .T......>....]..
	0x0c, 0x0a, 0x00, 0x00, 0x39, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, // ....9...........
	0x35, 0x13, 0x00, 0x00, 0xd6, 0x5d, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, // 5....]..=.......
	0xd7, 0x40, 0x00, 0x00, 0x8f, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xa7, 0x54, 0x00, 0x00, // .@...A..>....T..
	0xd7, 0x40, 0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x41, 0x12, 0x00, 0x00, // .@..9.......A...
	0x99, 0x0f, 0x00, 0x00, 0x0f, 0x0d, 0x00, 0x00, 0x4b, 0x0f, 0x00, 0x00, 0xa7, 0x54, 0x00, 0x00, // ........K....T..
	0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xba, 0x5b, 0x00, 0x00, 0x6e, 0x62, 0x00, 0x00, // =........[..nb..
	0x85, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x34, 0x00, 0x00, 0xba, 0x5b, 0x00, 0x00, // ........;4...[..
	0x41, 0x12, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0x3b, 0x34, 0x00, 0x00, // A...>....J..;4..
	0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                           // ....8....
};
static const uint8_t fs_image_pattern_dx9[243] =
{
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x05, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, // 0...............
	0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x03, // ".CTAB....O.....
	0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x38, 0x00, // ..0...........8.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x00, 0xab, 0xab, 0x04, 0x00, // ......s_tex.....
	0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, // ..............ps
	0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, // _3_0.Microsoft (
	0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, // R) HLSL Shader C
	0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x36, 0x2e, 0x33, 0x2e, 0x39, 0x36, 0x30, 0x30, // ompiler 6.3.9600
	0x2e, 0x31, 0x38, 0x36, 0x31, 0x31, 0x00, 0xab, 0xab, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, // .18611..........
	0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, // ................
	0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, 0x42, 0x00, // ..............B.
	0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, // ................
	0x00, 0x00, 0x00,                                                                               // ...
};
static const uint8_t fs_image_pattern_dx11[398] =
{
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x05, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x70, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xbe, 0x78, // 0.....p...DXBC.x
	0xe7, 0xa5, 0x19, 0x0c, 0x70, 0xeb, 0x4c, 0xb1, 0xac, 0x1f, 0x16, 0x84, 0xe9, 0x97, 0x01, 0x00, // ....p.L.........
	0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, // ..p.......,.....
	0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, // ......ISGNl.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ......P.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......b.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, // _POSITION.COLOR.
	0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, // TEXCOORD..OSGN,.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // .......... .....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, // ..SV_TARGET...SH
	0x44, 0x52, 0x94, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x5a, 0x00, // DR....@...%...Z.
	0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, // ...`......X....p
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, // ......UU..b.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, // ......b...2.....
	0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, // ..e.... ......h.
	0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, // ......E.........
	0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, // ..F.......F~....
	0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0xf2, 0x20, // ...`......8.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1e, // ......F.......F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,             // ......>.......
};
static const uint8_t fs_image_pattern_mtl[570] =
{
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x2b, 0x02, 0x00, 0x00, 0x75, 0x73, // FSH.......+...us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, // r0;.  float2 v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, // excoord0;.};.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // uct xlatMtlShade
	0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // rOutput {.  floa
	0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, // t4 gl_FragColor;
	0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // tlShaderUniform 
	0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, // {.};.fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, // t xlatMtlMain (x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, // latMtlShaderInpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, // t _mtl_i [[stage
	0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, // _in]], constant 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, // xlatMtlShaderUni
	0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, // form& _mtl_u [[b
	0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, // uffer(0)]].  ,  
	0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  texture2d<float
	0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // > s_tex [[textur
	0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, // e(0)]], sampler 
	0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x20, 0x5b, 0x5b, // _mtlsmp_s_tex [[
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, // sampler(0)]]).{.
	0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, //   xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, // utput _mtl_o;.  
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // _mtl_o.gl_FragCo
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, // lor = (_mtl_i.v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x2e, 0x73, // color0 * s_tex.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, // ample(_mtlsmp_s_
	0x74, 0x65, 0x78, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x29, 0x28, 0x5f, 0x6d, // tex, (float2)(_m
	0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // tl_i.v_texcoord0
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, // )));.  return _m
	0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // tl_o;.}...
};
extern const uint8_t* fs_image_pattern_pssl;
extern const uint32_t fs_image_pattern_pssl_size;
