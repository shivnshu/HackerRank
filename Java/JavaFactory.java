
        order = order.toLowerCase();
        order = Character.toUpperCase(order.charAt(0)) + order.substring(1, order.length());

        try {
            Class<?> aClass = Class.forName(order);
            return (Food) aClass.newInstance();
        } catch (Exception e) {
            throw new RuntimeException();
        }
    
