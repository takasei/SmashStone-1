//==================================================================================================================
//
// Xファイルの描画[sceneX.h]
// Author : Seiya Takahashi
//
//==================================================================================================================
#ifndef _SCENEX_H_
#define _SCENEX_H_

//==================================================================================================================
// インクルードファイル
//==================================================================================================================
#include "main.h"
#include "scene.h"
#include "kananlibrary.h"

//==================================================================================================================
//
// 描画Xクラスの定義
//
//==================================================================================================================
class CSceneX : public CScene
{
public:
	CSceneX();
	CSceneX(PRIORITY type);															// コンストラクタ
	~CSceneX();																		// デストラクタ
	virtual void Init(void);														// 初期化処理
	virtual void Uninit(void);														// 終了処理
	virtual void Update(void);														// 更新処理
	virtual void Draw(void);														// 描画処理
	virtual void DrawMesh(void);													// メッシュの描画
	virtual void DrawShadow(void);													// 影の描画

	static CSceneX *Create(void);													// 生成処理

	void BindTex(LPDIRECT3DTEXTURE9 tex)	{ m_pModelInfo->pTexture = tex; }	// テクスチャ結合処理
	void BindModel(MODELINFO pModelInfo)	{ m_pModelInfo = &pModelInfo; }		// モデル結合処理
	void SetPos(D3DXVECTOR3 pos)			{ m_pos = pos; }					// 位置設定処理
	void SetSize(D3DXVECTOR3 size)			{ m_size = size; }					// 大きさ設定処理
	void SetMove(D3DXVECTOR3 move)			{ m_move = move; }					// 移動量設定処理
	void SetRot(D3DXVECTOR3 rot)			{ m_rot = rot; }					// 回転設定処理
	void SetVecAxis(D3DXVECTOR3 vecAxis)	{ m_vecAxis = vecAxis; }			// 回転軸設定処理
	void SetValueRot(float ValueRot)		{ m_fValueRot = ValueRot; }			// 回転角設定処理

	bool SetCollisionBox(D3DXVECTOR3 pos, D3DXVECTOR3 size, D3DXVECTOR3 posOld);	// 矩形の当たり判定処理

	D3DXVECTOR3 GetPos(void)		{ return m_pos; }							// 位置取得処理
	D3DXVECTOR3 GetPosOld(void)		{ return m_posOld; }						// 前回の位置取得
	D3DXVECTOR3 GetSize(void)		{ return m_size; }							// 大きさ取得処理
	D3DXVECTOR3 GetMove(void)		{ return m_move; }							// 移動量取得処理
	D3DXVECTOR3 GetRot(void)		{ return m_rot; }							// 回転取得処理
	D3DXVECTOR3 GetVecAxis(void)	{ return m_vecAxis; }						// 回転軸取得処理
	D3DXMATRIX	*GetMatrix(void)	{ return &m_mtxWorld; }						// マトリックスの取得
	float GetValueRot(void)			{ return m_fValueRot; }						// 回転角取得処理

protected:

private:
	MODELINFO *m_pModelInfo;					// メッシュやマテリアルの情報
	D3DXMATRIX m_mtxRot;						// 回転マトリックス（保存用）
	D3DXMATRIX m_mtxWorld;						// ワールドマトリックス
	D3DXQUATERNION m_quat;						// クォータニオン

	D3DXVECTOR3 m_vecAxis;						// 回転軸
	D3DXVECTOR3 m_pos;							// 位置
	D3DXVECTOR3 m_posOld;						// 前回の位置
	D3DXVECTOR3 m_size;							// 大きさ
	D3DXVECTOR3 m_move;							// 移動量
	D3DXVECTOR3 m_rot;							// 回転

	float m_fValueRot;							// 回転角（回転量）
	float m_fAngle;								// 角度
	float m_fLength;							// 長さ
};
#endif