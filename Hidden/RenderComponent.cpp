#include "HiddenPCH.h"
#include "RenderComponent.h"
#include "Renderer.h"
#include "ResourceManager.h"
#include "GameObject.h"
#include "Transform.h"

Hidden::RenderComponent::RenderComponent(std::weak_ptr<GameObject> pParent)
	:Component(pParent)
{
}

Hidden::RenderComponent::~RenderComponent()
{}

void Hidden::RenderComponent::SetTexture(const std::string& filename)
{
	m_Texture = Hidden::ResourceManager::GetInstance().LoadTexture(filename);
}

void Hidden::RenderComponent::SetTexture(const std::shared_ptr<Texture2D>& texture)
{
	m_Texture = texture;
}

void Hidden::RenderComponent::Render() const
{
	Hidden::Transform location{};
	location = m_pParent.lock()->GetTransform();

	Hidden::Renderer::GetInstance().RenderTexture(*m_Texture, location.GetPosition().x, location.GetPosition().y );
}

void Hidden::RenderComponent::Update()
{
}