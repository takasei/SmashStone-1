//==================================================================================================================
//
// プレイヤー処理[player.cpp]
// Author : Seiya Takahashi
//
//==================================================================================================================
#include "inputKeyboard.h"
#include "renderer.h"
#include "player.h"
#include "debugProc.h"
#include "camera.h"
#include "meshField.h"
#include "motionModel.h"
#include "time.h"
#include "title.h"
#include <initializer_list>
#include "tutorial.h"
#include "game.h"
#include "inputGamepad.h"
#include "character.h"
#include "scene.h"

//==================================================================================================================
// 静的メンバ変数の初期化
//==================================================================================================================
//CCamera *CPlayer::m_pCamera = NULL;				// カメラ情報

//==================================================================================================================
// マクロ定義
//==================================================================================================================

//==================================================================================================================
// コンストラクタ
//==================================================================================================================
CPlayer::CPlayer(PRIORITY type = CScene::PRIORITY_PLAYER) : CCharacter(type)
{

}

//==================================================================================================================
// デストラクタ
//==================================================================================================================
CPlayer::~CPlayer()
{

}

//==================================================================================================================
// 初期化処理
//==================================================================================================================
void CPlayer::Init(void)
{
	CCharacter::Init();
	CCharacter::SetModelType(CHARACTER_1);
}

//==================================================================================================================
// 終了処理
//==================================================================================================================
void CPlayer::Uninit(void)
{
	CCharacter::Uninit();
}

//==================================================================================================================
// 更新処理
//==================================================================================================================
void CPlayer::Update(void)
{
	CCharacter::Update();
}

//==================================================================================================================
// 描画処理
//==================================================================================================================
void CPlayer::Draw(void)
{
	CCharacter::Draw();
}

//==================================================================================================================
// 生成処理
//==================================================================================================================
CPlayer *CPlayer::Create(void)
{
	// シーン動的に確保
	CPlayer *pPlayer = new CPlayer(CScene::PRIORITY_PLAYER);

	pPlayer->Init();			// プレイヤーの初期化

	// 値を返す
	return pPlayer;
}
