#pragma once

#include "Subject.h"
#include "Component.h"

using namespace Hidden;

class HealthComponent : public Component
{
public:

	enum class events
	{
		lifeLost,
		Death
	};

	HealthComponent() = default;
	~HealthComponent() = default;

	HealthComponent(const HealthComponent & other) = default;
	HealthComponent(HealthComponent && other) = default;
	HealthComponent& operator=(const HealthComponent & other) = default;
	HealthComponent& operator=(HealthComponent && other) = default;

	void Update() override;
	const unsigned int getHealth() const;


	std::weak_ptr<Subject<HealthComponent>> GetSubject();

private:
	unsigned int m_Health;

	std::weak_ptr<Subject<HealthComponent>> m_pSubject;

};

