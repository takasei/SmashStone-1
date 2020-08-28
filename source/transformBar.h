//==================================================================================================================
//
// �ϐg�o�[�N���X[transformBar.h]
// Author:Seiya Takahashi
//
//==================================================================================================================
#ifndef _TRANSFORMBAR_H
#define _TRANSFORMBAR_H

//==================================================================================================================
// �C���N���[�h�t�@�C��
//==================================================================================================================
#include "main.h"
#include "scene.h"

//==================================================================================================================
// �O���錾
//==================================================================================================================
class CBar;
class CScene;
class CPlayer;

//==================================================================================================================
//�N���X�̒�`
//==================================================================================================================
class CTransformBar : public CScene
{
public:

	CTransformBar(PRIORITY type);			// �R���X�g���N�^
	~CTransformBar();						// �f�X�g���N�^
	void Init(void);					// ����������
	void Uninit(void);					// �I������
	void Update(void);					// �X�V����
	void Draw(void);					// �`�揈��

	static CTransformBar *Create(int nNumber, float fMaxHP);// ��������

	void SetPos(D3DXVECTOR3 pos);		// �ʒu�ݒ菈��
	void SetnPlayerNum(int nPlayerNum);	// �v���C���[�ԍ��ݒ菈��

	D3DXVECTOR3 GetPos(void);			// �ʒu�擾����

protected:

private:
	static CPlayer *m_pPlayer;		// �v���C���[�̏��|�C���^
	static int m_nInitCnt;			// �������p�J�E���^

	CBar *m_pBar;					// �o�[�̏��|�C���^

	D3DXVECTOR3 m_pos;				// �ʒu

	int m_nPlayerNum;		// �v���C���[�̔ԍ�

	float m_fMaxHP;			// �ő�HP
	float m_fNowHP;			// ���݂�HP
	float m_fHeight;		// �c�̒���

	bool m_bTrans[MAX_PLAYER];	// �ϐg���Ă��邩�ǂ���
};

#endif