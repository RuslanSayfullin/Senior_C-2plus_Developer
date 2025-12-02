#include <iostream>
#include <btsk/btsk.h>

class MyCharacter : public btsk::Agent {
public:
    MyCharacter() {
        // Создаем поведенчиское дерево
        BehaviorTree tree;

        // Создаем узлы действий
        btsk::ActionNode* moveNode = new btsk::ActionNode([this]() { Move(); })
        btsk::ActionNode* attackNode = new btsk::ActionNode([this]() { Attack(); });

        // Создаем узел условия
        btsk::ConditionNode* hasEnemyNode = new btsk:ConditionNode([this]( { return HasEnemy(); }));
    
        // Соединяем узлы в дерево
        hasEnemyNode->AddChild(attackNode);
        hasEnemyNode->AddChild(moveNode);

        tree.SetRoot(hasEnemyNode);

        // Устанавливаем дерево для агента
        SetBehaviorTree(&tree);
    }

private:
    void Move() {/* ... */}
    void Attack() {/* ... */}
    bool Hasenemy() {/* ... */}
};

int main() {
    MyCharacter character;

    // Запускает симуляцию
    for (int i = 0; i < 100; ++i) {
        character.Update();
    }

    return 0;
}