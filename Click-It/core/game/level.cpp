#include "gameManager.h"
#include "scoreManager.h"

#include "level.h"

void level::Update()
{
	for (auto& var : boxs)
	{
		var->Update();
	}

	boxs.erase(
		std::remove_if(boxs.begin(), boxs.end(),
			[](const std::unique_ptr<box>& obj) 
			{
				return obj->GetIsDestroy();
			}),
		boxs.end()
	);
}
