//==================================================================================================================
// 
// ���C��[main.h]
// Author : Seiya Takahashi
// 
//==================================================================================================================
#ifndef _MAIN_H_
#define _MAIN_H_

//==================================================================================================================
// �x���Ώ��p
//==================================================================================================================
#define _CRT_SECURE_NO_WARNINGS
#define DIRECTINPUT_VERSION (0x0800)

//==================================================================================================================
// �C���N���[�h�t�@�C��
//==================================================================================================================
#include <stdio.h>
#include<Windows.h>
#include"d3dx9.h"

#include "dinput.h"							// �_�C���N�g�C���v�b�g
#include <Xinput.h>							// �G�b�N�X�C���v�b�g

#include "xaudio2.h"
#include <iostream>
using namespace std;

//==================================================================================================================
// ���C�u�����̃����N
//==================================================================================================================
#pragma comment(lib,"d3d9.lib")					// �`�揈���ɕK�v
#pragma comment(lib,"d3dx9.lib")				// [d3d9.lib]�̊g�����C�u����
#pragma comment(lib,"dxguid.lib")				// DirectX�R���|�[�l���g�i���i�j�g�p�ɕK�v
#pragma comment(lib,"winmm.lib")				// �V�X�e�����Ԏ擾�ɕK�v
#pragma comment(lib,"dinput8.lib")				// ���͂ɕK�v

//==================================================================================================================
// �}�N����`
//==================================================================================================================
#define SCREEN_WIDTH	(1280)					// �E�B���h�E�̕�
#define SCREEN_HEIGHT	(720)					// �E�B���h�E�̍���

// 2D�|���S�����_�t�H�[�}�b�g
#define FVF_VERTEX_2D (D3DFVF_XYZRHW|D3DFVF_DIFFUSE | D3DFVF_TEX1)

// 3D�|���S�����_�t�H�[�}�b�g
#define FVF_VERTEX_3D (D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_DIFFUSE | D3DFVF_TEX1)

// 2D�|���S�����_�t�H�[�}�b�g�ɍ��킹���\���̂��`
typedef struct
{
	D3DXVECTOR3 pos;	// ���_���W
	float		rhw;	// 1.0�ŌŒ�A�������W
	D3DCOLOR	col;	// ���_�J���[
	D3DXVECTOR2 tex;	// �e�N�X�`�����W
} VERTEX_2D;

// D�|���S�����_�t�H�[�}�b�g���킹���\���̂��`
typedef struct
{
	D3DXVECTOR3 pos;	// ���_���W
	D3DXVECTOR3 nor;	// �@���x�N�g��
	D3DCOLOR col;		// ���_�J���[
	D3DXVECTOR2 tex;	// �e�N�X�`�����W
} VERTEX_3D;

int GetFPS(void);		// FPS�̎擾

#endif