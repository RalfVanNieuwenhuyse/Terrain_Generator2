#pragma once

class TorusPrefab;
class MinionScene final : public GameScene
{
public:
	MinionScene();
	~MinionScene() override = default;

	MinionScene(const MinionScene& other) = delete;
	MinionScene(MinionScene&& other) noexcept = delete;
	MinionScene& operator=(const MinionScene& other) = delete;
	MinionScene& operator=(MinionScene&& other) noexcept = delete;

protected:
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void OnGUI() override;

private:
	/*GameObject* m_pObject{};
	RigidBodyComponent* m_pRigidBody{};
	FreeCamera* m_pFixedCamera{};*/
	TorusPrefab* m_pTorusBig{ nullptr };
	TorusPrefab* m_pTorusMedium{ nullptr };
	TorusPrefab* m_pTorusSmall{ nullptr };
};


