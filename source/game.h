//==================================================================================================================
//
// �Q�[������[game.h]
// Author : Seiya Takahashi
//
//==================================================================================================================
#ifndef _GAME_H
#define _GAME_H

//==================================================================================================================
// �C���N���[�h�t�@�C��
//==================================================================================================================
#include "main.h"

//==================================================================================================================
// �O���錾
//==================================================================================================================
class CMeshField;
class CCamera;
class CLight;
class CLogo;
class CModel;
class CPause;
class CMeshSphere;
class CPlayer;

//==================================================================================================================
//
// �Q�[���N���X�̒�`
//
//==================================================================================================================
class CGame
{
public:
	// ==========================================================
	// �Q�[���̏��
	// ==========================================================
	typedef enum
	{
		GAMESTATE_NONE = 0,		// �������Ă��Ȃ����
		GAMESTATE_NORMAL,		// �ʏ���
		GAMESTATE_PAUSE,		// �|�[�Y���
		GAMESTATE_START_OVER,	// ���߂����蒼��
		GAMESTATE_BREAK,		// �Q�[�����f
		GAMESTATE_END,			// �Q�[���̏I��
		GAMESTATE_MAX			// �ő�
	} GAMESTATE;				// �Q�[���̏��

	CGame();									// �R���X�g���N�^
	~CGame();									// �f�X�g���N�^
	void Init(void);							// ����������
	void Uninit(void);							// �I������
	void Update(void);							// �X�V����
	void Draw(void);							// �`�揈��
	static CGame *Create(void);					// ��������

	static void SetGameState(GAMESTATE state);	// �Q�[���̏�Ԑݒ�
	static GAMESTATE GetGameState(void);		// �Q�[���̏�Ԏ擾
	static CPlayer *GetPlayer(void) { return m_pPlayer; }			// �L�����N�^�[�̏��擾����

protected:

private:
	static GAMESTATE m_gameState;				// �Q�[�����
	static CPlayer *m_pPlayer;					// �L�����N�^�[�̏��|�C���^
	static CMeshField *m_pMeshField;			// ���b�V���t�B�[���h�̏��|�C���^
	static CCamera *m_pCamera;					// �J�����̏��|�C���^
	static CLight *m_pLight;					// ���C�g�̏��|�C���^
	static CLogo *m_pLogo;						// ���S�̏��|�C���^
	static CPause *m_pPause;					// �|�[�Y�̏��|�C���^
	static CMeshSphere *m_pMeshSphere;			// ���b�V�����̏��|�C���^
	static int m_nCounterGameState;				// �Q�[���̏�ԊǗ��J�E���^�[

	D3DXMATRIX  m_mtxWorld;						// �}�g���b�N�X
};
#endif