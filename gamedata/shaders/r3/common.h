#ifndef COMMON_H
#define COMMON_H
#include "shared\common.h"
#include "ShaderSettings.txt"
#include "common_defines.h"
#include "common_policies.h"
#include "common_iostructs.h"
#include "common_samplers.h"
#include "common_cbuffers.h"
#include "common_functions.h"
#ifdef USE_R2_STATIC_SUN
#define xmaterial float(1.0h/4.h)
#else
#define xmaterial float(L_material.w)
#endif
/*
uniform float4 J_direct [6];
uniform float4 J_spot [6];
float2 calc_detail(float3 w_pos) {
float dtl =distance(w_pos,eye_position)*dt_params.w;
dtl =min(dtl*dtl,1);
float dt_mul =1-dtl;
float dt_add =.5*dtl;
return float2(dt_mul,dt_add); }
#ifdef USE_HWSMAP
#else
struct v_shadow_direct_aref {
float4 hpos: POSITION;
float depth: TEXCOORD0;
float2 tc0: TEXCOORD1; };
struct v_shadow_direct {
float4 hpos: POSITION;
float depth: TEXCOORD0; };
#endif
struct p_screen {
float4 hpos :POSITION;
float2 tc0 :TEXCOORD0; };
float3 v_hemi_wrap (float3 n,float w) { return L_hemi_color*(w+(1-w)*n.y); }
float3 v_sun_wrap (float3 n,float w) { return L_sun_color*(w+(1-w)*dot(n,-L_sun_dir_w)); }
*/
#define FXPS technique _render{pass _code{PixelShader=compile ps_3_0 main();}}
#define FXVS technique _render{pass _code{VertexShader=compile vs_3_0 main();}}
#endif