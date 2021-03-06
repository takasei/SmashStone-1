//==================================================================================================================
//
// 変身バークラス[transformBar.h]
// Author:Seiya Takahashi
//
//==================================================================================================================
#ifndef _TRANSFORMBAR_H
#define _TRANSFORMBAR_H

//==================================================================================================================
// インクルードファイル
//==================================================================================================================
#include "main.h"
#include "scene.h"

//==================================================================================================================
// 前方宣言
//==================================================================================================================
class CBar;
class CScene;
class CPlayer;

//==================================================================================================================
//クラスの定義
//==================================================================================================================
class CTransformBar : public CScene
{
public:

	CTransformBar(PRIORITY type);			// コンストラクタ
	~CTransformBar();						// デストラクタ
	void Init(void);					// 初期化処理
	void Uninit(void);					// 終了処理
	void Update(void);					// 更新処理
	void Draw(void);					// 描画処理

	static CTransformBar *Create(int nNumber, float fMaxHP);// 生成処理

	void SetPos(D3DXVECTOR3 pos);		// 位置設定処理
	void SetnPlayerNum(int nPlayerNum);	// プレイヤー番号設定処理

	D3DXVECTOR3 GetPos(void);			// 位置取得処理

protected:

private:
	static CPlayer *m_pPlayer;		// プレイヤーの情報ポインタ
	static int m_nInitCnt;			// 初期化用カウンタ

	CBar *m_pBar;					// バーの情報ポインタ

	D3DXVECTOR3 m_pos;				// 位置

	int m_nPlayerNum;		// プレイヤーの番号

	float m_fMaxHP;			// 最大HP
	float m_fNowHP;			// 現在のHP
	float m_fHeight;		// 縦の長さ

	bool m_bTrans[MAX_PLAYER];	// 変身しているかどうか
};

#endif
